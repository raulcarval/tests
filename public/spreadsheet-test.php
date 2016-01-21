<?php

require_once '../config/config.php';

ini_set('display_errors', 1);

session_start();

function getToken()
{
    $client = new Google_Client();
    $client->setApplicationName('GOOGLE_APPLICATION_NAME');
    $client->setClientId(GOOGLE_CLIENT_ID);

    $key = file_get_contents(GOOGLE_KEY_FILE);
    $cred = new Google_Auth_AssertionCredentials(
        GOOGLE_CLIENT_EMAIL,
        array(GOOGLE_SPREADSHEETS_SCOPE),
        $key
        );

    $client->setAssertionCredentials($cred);

    if($client->getAuth()->isAccessTokenExpired()) {
        $client->getAuth()->refreshTokenWithAssertion($cred);
    }

    $service_token = json_decode($client->getAccessToken());
    return $service_token->access_token;
}

require '../vendor/autoload.php';

use Google\Spreadsheet\DefaultServiceRequest;
use Google\Spreadsheet\ServiceRequestFactory;

$_SESSION['access_token']=getToken();

$serviceRequest = new Google\Spreadsheet\DefaultServiceRequest($_SESSION['access_token']);
Google\Spreadsheet\ServiceRequestFactory::setInstance($serviceRequest);

$spreadsheetService = new Google\Spreadsheet\SpreadsheetService();
$spreadsheetFeed = $spreadsheetService->getSpreadsheets();
$spreadsheet = $spreadsheetFeed->getByTitle('planilha_teste');
$worksheetFeed = $spreadsheet->getWorksheets();
$worksheet = $worksheetFeed->getByTitle('Sheet1');
$listFeed = $worksheet->getListFeed();

foreach ($listFeed->getEntries() as $entry) {
	 $values = $entry->getValues();
}

var_dump($values);
// $spreadsheetService = new Google\Spreadsheet\SpreadsheetService();
// $spreadsheetFeed = $spreadsheetService->getSpreadsheets();
// $spreadsheet = $spreadsheetFeed->getByTitle('planilha_teste');
// $worksheetFeed = $spreadsheet->getWorksheets();
// $worksheet = $worksheetFeed->getByTitle('Sheet1');
// $listFeed = $worksheet->getListFeed();

// $row = array('departamento' => 'Design', 'responsavel' => 'Adriano');
// $listFeed->insert($row); 