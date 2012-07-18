[33mcommit da85a8915a73ae12eba448a5d3559667ad533fca[m
Author: Raul Ferreira <raulcarval@gmail.com>
Date:   Wed Jul 18 15:17:30 2012 -0300

    Primeiro Commit

[1mdiff --git a/LICENSE b/LICENSE[m
[1mnew file mode 100644[m
[1mindex 0000000..cdffe7a[m
[1m--- /dev/null[m
[1m+++ b/LICENSE[m
[36m@@ -0,0 +1,19 @@[m
[32m+[m[32mCopyright (c) 2004-2012 Fabien Potencier[m
[32m+[m
[32m+[m[32mPermission is hereby granted, free of charge, to any person obtaining a copy[m
[32m+[m[32mof this software and associated documentation files (the "Software"), to deal[m
[32m+[m[32min the Software without restriction, including without limitation the rights[m
[32m+[m[32mto use, copy, modify, merge, publish, distribute, sublicense, and/or sell[m
[32m+[m[32mcopies of the Software, and to permit persons to whom the Software is furnished[m
[32m+[m[32mto do so, subject to the following conditions:[m
[32m+[m
[32m+[m[32mThe above copyright notice and this permission notice shall be included in all[m
[32m+[m[32mcopies or substantial portions of the Software.[m
[32m+[m
[32m+[m[32mTHE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR[m
[32m+[m[32mIMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,[m
[32m+[m[32mFITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE[m
[32m+[m[32mAUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER[m
[32m+[m[32mLIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,[m
[32m+[m[32mOUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN[m
[32m+[m[32mTHE SOFTWARE.[m
[1mdiff --git a/README.md b/README.md[m
[1mnew file mode 100644[m
[1mindex 0000000..864d170[m
[1m--- /dev/null[m
[1m+++ b/README.md[m
[36m@@ -0,0 +1,147 @@[m
[32m+[m[32mSymfony Standard Edition[m
[32m+[m[32m========================[m
[32m+[m
[32m+[m[32mWelcome to the Symfony Standard Edition - a fully-functional Symfony2[m
[32m+[m[32mapplication that you can use as the skeleton for your new app. If you want[m
[32m+[m[32mto learn more about the features included, see the "What's Inside?" section.[m
[32m+[m
[32m+[m[32mThis document contains information on how to download and start using Symfony.[m
[32m+[m[32mFor a more detailed explanation, see the[m
[32m+[m[32m[Installation chapter](http://symfony.com/doc/current/book/installation.html)[m
[32m+[m[32mof the Symfony Documentation.[m
[32m+[m
[32m+[m[32m1) Download the Standard Edition[m
[32m+[m[32m--------------------------------[m
[32m+[m
[32m+[m[32mIf you've already downloaded the standard edition, and unpacked it somewhere[m
[32m+[m[32mwithin your web root directory, then move on to the "Installation" section.[m
[32m+[m
[32m+[m[32mTo download the standard edition, you have two options:[m
[32m+[m
[32m+[m[32m### Download an archive file (*recommended*)[m
[32m+[m
[32m+[m[32mThe easiest way to get started is to download an archive of the standard edition[m
[32m+[m[32m(http://symfony.com/download). Unpack it somewhere under your web server root[m
[32m+[m[32mdirectory and you're done. The web root is wherever your web server (e.g. Apache)[m
[32m+[m[32mlooks when you access `http://localhost` in a browser.[m
[32m+[m
[32m+[m[32m### Clone the git Repository[m
[32m+[m
[32m+[m[32mWe highly recommend that you download the packaged version of this distribution.[m
[32m+[m[32mBut if you still want to use Git, you are on your own.[m
[32m+[m
[32m+[m[32mRun the following commands:[m
[32m+[m
[32m+[m[32m    git clone http://github.com/symfony/symfony-standard.git[m
[32m+[m[32m    cd symfony-standard[m
[32m+[m[32m    rm -rf .git[m
[32m+[m
[32m+[m[32m2) Installation[m
[32m+[m[32m---------------[m
[32m+[m
[32m+[m[32mOnce you've downloaded the standard edition, installation is easy, and basically[m
[32m+[m[32minvolves making sure your system is ready for Symfony.[m
[32m+[m
[32m+[m[32m### a) Check your System Configuration[m
[32m+[m
[32m+[m[32mBefore you begin, make sure that your local system is properly configured[m
[32m+[m[32mfor Symfony. To do this, execute the following:[m
[32m+[m
[32m+[m[32m    php app/check.php[m
[32m+[m
[32m+[m[32mIf you get any warnings or recommendations, fix these now before moving on.[m
[32m+[m
[32m+[m[32m### b) Install the Vendor Libraries[m
[32m+[m
[32m+[m[32mIf you downloaded the archive "without vendors" or installed via git, then[m
[32m+[m[32myou need to download all of the necessary vendor libraries. If you're not[m
[32m+[m[32msure if you need to do this, check to see if you have a ``vendor/`` directory.[m
[32m+[m[32mIf you don't, or if that directory is empty, run the following:[m
[32m+[m
[32m+[m[32m    php bin/vendors install[m
[32m+[m
[32m+[m[32mNote that you **must** have git installed and be able to execute the `git`[m
[32m+[m[32mcommand to execute this script. If you don't have git available, either install[m
[32m+[m[32mit or download Symfony with the vendor libraries already included.[m
[32m+[m
[32m+[m[32m### c) Access the Application via the Browser[m
[32m+[m
[32m+[m[32mCongratulations! You're now ready to use Symfony. If you've unzipped Symfony[m
[32m+[m[32min the web root of your computer, then you should be able to access the[m
[32m+[m[32mweb version of the Symfony requirements check via:[m
[32m+[m
[32m+[m[32m    http://localhost/Symfony/web/config.php[m
[32m+[m
[32m+[m[32mIf everything looks good, click the "Bypass configuration and go to the Welcome page"[m
[32m+[m[32mlink to load up your first Symfony page.[m
[32m+[m
[32m+[m[32mYou can also use a web-based configurator by clicking on the "Configure your[m
[32m+[m[32mSymfony Application online" link of the ``config.php`` page.[m
[32m+[m
[32m+[m[32mTo see a real-live Symfony page in action, access the following page:[m
[32m+[m
[32m+[m[32m    web/app_dev.php/demo/hello/Fabien[m
[32m+[m
[32m+[m[32m3) Learn about Symfony![m
[32m+[m[32m-----------------------[m
[32m+[m
[32m+[m[32mThis distribution is meant to be the starting point for your application,[m
[32m+[m[32mbut it also contains some sample code that you can learn from and play with.[m
[32m+[m
[32m+[m[32mA great way to start learning Symfony is via the [Quick Tour](http://symfony.com/doc/current/quick_tour/the_big_picture.html),[m
[32m+[m[32mwhich will take you through all the basic features of Symfony2 and the test[m
[32m+[m[32mpages that are available in the standard edition.[m
[32m+[m
[32m+[m[32mOnce you're feeling good, you can move onto reading the official[m
[32m+[m[32m[Symfony2 book](http://symfony.com/doc/current/).[m
[32m+[m
[32m+[m[32mUsing this Edition as the Base of your Application[m
[32m+[m[32m--------------------------------------------------[m
[32m+[m
[32m+[m[32mSince the standard edition is fully-configured and comes with some examples,[m
[32m+[m[32myou'll need to make a few changes before using it to build your application.[m
[32m+[m
[32m+[m[32mThe distribution is configured with the following defaults:[m
[32m+[m
[32m+[m[32m* Twig is the only configured template engine;[m
[32m+[m[32m* Doctrine ORM/DBAL is configured;[m
[32m+[m[32m* Swiftmailer is configured;[m
[32m+[m[32m* Annotations for everything are enabled.[m
[32m+[m
[32m+[m[32mA default bundle, ``AcmeDemoBundle``, shows you Symfony2 in action. After[m
[32m+[m[32mplaying with it, you can remove it by following these steps:[m
[32m+[m
[32m+[m[32m* delete the ``src/Acme`` directory;[m
[32m+[m[32m* remove the routing entries referencing AcmeBundle in ``app/config/routing_dev.yml``;[m
[32m+[m[32m* remove the AcmeBundle from the registered bundles in ``app/AppKernel.php``;[m
[32m+[m
[32m+[m[32mWhat's inside?[m
[32m+[m[32m---------------[m
[32m+[m[32mThe Symfony Standard Edition comes pre-configured with the following bundles:[m
[32m+[m
[32m+[m[32m* **FrameworkBundle** - The core Symfony framework bundle[m
[32m+[m[32m* **SensioFrameworkExtraBundle** - Adds several enhancements, including template[m
[32m+[m[32m  and routing annotation capability ([documentation](http://symfony.com/doc/current/bundles/SensioFrameworkExtraBundle/index.html))[m
[32m+[m[32m* **DoctrineBundle** - Adds support for the Doctrine ORM[m
[32m+[m[32m  ([documentation](http://symfony.com/doc/current/book/doctrine.html))[m
[32m+[m[32m* **TwigBundle** - Adds support for the Twig templating engine[m
[32m+[m[32m  ([documentation](http://symfony.com/doc/current/book/templating.html))[m
[32m+[m[32m* **SecurityBundle** - Adds security by integrating Symfony's security component[m
[32m+[m[32m  ([documentation](http://symfony.com/doc/current/book/security.html))[m
[32m+[m[32m* **SwiftmailerBundle** - Adds support for Swiftmailer, a library for sending emails[m
[32m+[m[32m  ([documentation](http://symfony.com/doc/2.0/cookbook/email.html))[m
[32m+[m[32m* **MonologBundle** - Adds support for Monolog, a logging library[m
[32m+[m[32m  ([documentation](http://symfony.com/doc/2.0/cookbook/logging/monolog.html))[m
[32m+[m[32m* **AsseticBundle** - Adds support for Assetic, an asset processing library[m
[32m+[m[32m  ([documentation](http://symfony.com/doc/2.0/cookbook/assetic/asset_management.html))[m
[32m+[m[32m* **JMSSecurityExtraBundle** - Allows security to be added via annotations[m
[32m+[m[32m  ([documentation](http://symfony.com/doc/current/bundles/JMSSecurityExtraBundle/index.html))[m
[32m+[m[32m* **WebProfilerBundle** (in dev/test env) - Adds profiling functionality and[m
[32m+[m[32m  the web debug toolbar[m
[32m+[m[32m* **SensioDistributionBundle** (in dev/test env) - Adds functionality for configuring[m
[32m+[m[32m  and working with Symfony distributions[m
[32m+[m[32m* **SensioGeneratorBundle** (in dev/test env) - Adds code generation capabilities[m
[32m+[m[32m  ([documentation](http://symfony.com/doc/current/bundles/SensioGeneratorBundle/index.html))[m
[32m+[m[32m* **AcmeDemoBundle** (in dev/test env) - A demo bundle with some example code[m
[32m+[m
[32m+[m[32mEnjoy![m
[1mdiff --git a/app/.htaccess b/app/.htaccess[m
[1mnew file mode 100644[m
[1mindex 0000000..3418e55[m
[1m--- /dev/null[m
[1m+++ b/app/.htaccess[m
[36m@@ -0,0 +1 @@[m
[32m+[m[32mdeny from all[m
\ No newline at end of file[m
[1mdiff --git a/app/AppCache.php b/app/AppCache.php[m
[1mnew file mode 100644[m
[1mindex 0000000..ddb51db[m
[1m--- /dev/null[m
[1m+++ b/app/AppCache.php[m
[36m@@ -0,0 +1,9 @@[m
[32m+[m[32m<?php[m
[32m+[m
[32m+[m[32mrequire_once __DIR__.'/AppKernel.php';[m
[32m+[m
[32m+[m[32muse Symfony\Bundle\FrameworkBundle\HttpCache\HttpCache;[m
[32m+[m
[32m+[m[32mclass AppCache extends HttpCache[m
[32m+[m[32m{[m
[32m+[m[32m}[m
[1mdiff --git a/app/AppKernel.php b/app/AppKernel.php[m
[1mnew file mode 100644[m
[1mindex 0000000..5bd97b7[m
[1m--- /dev/null[m
[1m+++ b/app/AppKernel.php[m
[36m@@ -0,0 +1,36 @@[m
[32m+[m[32m<?php[m
[32m+[m
[32m+[m[32muse Symfony\Component\HttpKernel\Kernel;[m
[32m+[m[32muse Symfony\Component\Config\Loader\LoaderInterface;[m
[32m+[m
[32m+[m[32mclass AppKernel extends Kernel[m
[32m+[m[32m{[m
[32m+[m[32m    public function registerBundles()[m
[32m+[m[32m    {[m
[32m+[m[32m        $bundles = array([m
[32m+[m[32m            new Symfony\Bundle\FrameworkBundle\FrameworkBundle(),[m
[32m+[m[32m            new Symfony\Bundle\SecurityBundle\SecurityBundle(),[m
[32m+[m[32m            new Symfony\Bundle\TwigBundle\TwigBundle(),[m
[32m+[m[32m            new Symfony\Bundle\MonologBundle\MonologBundle(),[m
[32m+[m[32m            new Symfony\Bundle\SwiftmailerBundle\SwiftmailerBundle(),[m
[32m+[m[32m            new Symfony\Bundle\DoctrineBundle\DoctrineBundle(),[m
[32m+[m[32m            new Symfony\Bundle\AsseticBundle\AsseticBundle(),[m
[32m+[m[32m            new Sensio\Bundle\FrameworkExtraBundle\SensioFrameworkExtraBundle(),[m
[32m+[m[32m            new JMS\SecurityExtraBundle\JMSSecurityExtraBundle(),[m
[32m+[m[32m        );[m
[32m+[m
[32m+[m[32m        if (in_array($this->getEnvironment(), array('dev', 'test'))) {[m
[32m+[m[32m            $bundles[] = new Acme\DemoBundle\AcmeDemoBundle();[m
[32m+[m[32m            $bundles[] = new Symfony\Bundle\WebProfilerBundle\WebProfilerBundle();[m
[32m+[m[32m            $bundles[] = new Sensio\Bundle\DistributionBundle\SensioDistributionBundle();[m
[32m+[m[32m            $bundles[] = new Sensio\Bundle\GeneratorBundle\SensioGeneratorBundle();[m
[32m+[m[32m        }[m
[32m+[m
[32m+[m[32m        return $bundles;[m
[32m+[m[32m    }[m
[32m+[m
[32m+[m[32m    public function registerContainerConfiguration(LoaderInterface $loader)[m
[32m+[m[32m    {[m
[32m+[m[32m        $loader->load(__DIR__.'/config/config_'.$this->getEnvironment().'.yml');[m
[32m+[m[32m    }[m
[32m+[m[32m}[m
[1mdiff --git a/app/Resources/views/base.html.twig b/app/Resources/views/base.html.twig[m
[1mnew file mode 100644[m
[1mindex 0000000..4b9151e[m
[1m--- /dev/null[m
[1m+++ b/app/Resources/views/base.html.twig[m
[36m@@ -0,0 +1,13 @@[m
[32m+[m[32m<!DOCTYPE html>[m
[32m+[m[32m<html>[m
[32m+[m[32m    <head>[m
[32m+[m[32m        <meta charset="UTF-8" />[m
[32m+[m[32m        <title>{% block title %}Welcome!{% endblock %}</title>[m
[32m+[m[32m        {% block stylesheets %}{% endblock %}[m
[32m+[m[32m        <link rel="shortcut icon" href="{{ asset('favicon.ico') }}" />[m
[32m+[m[32m    </head>[m
[32m+[m[32m    <body>[m
[32m+[m[32m        {% block body %}{% endblock %}[m
[32m+[m[32m        {% block javascripts %}{% endblock %}[m
[32m+[m[32m    </body>[m
[32m+[m[32m</html>[m
[1mdiff --git a/app/autoload.php b/app/autoload.php[m
[1mnew file mode 100644[m
[1mindex 0000000..9362833[m
[1m--- /dev/null[m
[1m+++ b/app/autoload.php[m
[36m@@ -0,0 +1,41 @@[m
[32m+[m[32m<?php[m
[32m+[m
[32m+[m[32muse Symfony\Component\ClassLoader\UniversalClassLoader;[m
[32m+[m[32muse Doctrine\Common\Annotations\AnnotationRegistry;[m
[32m+[m
[32m+[m[32m$loader = new UniversalClassLoader();[m
[32m+[m[32m$loader->registerNamespaces(array([m
[32m+[m[32m    'Symfony'          => array(__DIR__.'/../vendor/symfony/src', __DIR__.'/../vendor/bundles'),[m
[32m+[m[32m    'Sensio'           => __DIR__.'/../vendor/bundles',[m
[32m+[m[32m    'JMS'              => __DIR__.'/../vendor/bundles',[m
[32m+[m[32m    'Doctrine\\Common' => __DIR__.'/../vendor/doctrine-common/lib',[m
[32m+[m[32m    'Doctrine\\DBAL'   => __DIR__.'/../vendor/doctrine-dbal/lib',[m
[32m+[m[32m    'Doctrine'         => __DIR__.'/../vendor/doctrine/lib',[m
[32m+[m[32m    'Monolog'          => __DIR__.'/../vendor/monolog/src',[m
[32m+[m[32m    'Assetic'          => __DIR__.'/../vendor/assetic/src',[m
[32m+[m[32m    'Metadata'         => __DIR__.'/../vendor/metadata/src',[m
[32m+[m[32m));[m
[32m+[m[32m$loader->registerPrefixes(array([m
[32m+[m[32m    'Twig_Extensions_' => __DIR__.'/../vendor/twig-extensions/lib',[m
[32m+[m[32m    'Twig_'            => __DIR__.'/../vendor/twig/lib',[m
[32m+[m[32m));[m
[32m+[m
[32m+[m[32m// intl[m
[32m+[m[32mif (!function_exists('intl_get_error_code')) {[m
[32m+[m[32m    require_once __DIR__.'/../vendor/symfony/src/Symfony/Component/Locale/Resources/stubs/functions.php';[m
[32m+[m
[32m+[m[32m    $loader->registerPrefixFallbacks(array(__DIR__.'/../vendor/symfony/src/Symfony/Component/Locale/Resources/stubs'));[m
[32m+[m[32m}[m
[32m+[m
[32m+[m[32m$loader->registerNamespaceFallbacks(array([m
[32m+[m[32m    __DIR__.'/../src',[m
[32m+[m[32m));[m
[32m+[m[32m$loader->register();[m
[32m+[m
[32m+[m[32mAnnotationRegistry::registerLoader(function($class) use ($loader) {[m
[32m+[m[32m    $loader->loadClass($class);[m
[32m+[m[32m    return class_exists($class, false);[m
[32m+[m[32m});[m
[32m+[m[32mAnnotationRegistry::registerFile(__DIR__.'/../vendor/doctrine/lib/Doctrine/ORM/Mapping/Driver/DoctrineAnnotations.php');[m
[32m+[m
[32m+[m[32mrequire __DIR__.'/../vendor/swiftmailer/lib/swift_required.php';[m
[1mdiff --git a/app/bootstrap.php.cache b/app/bootstrap.php.cache[m
[1mnew file mode 100644[m
[1mindex 0000000..2e44205[m
[1m--- /dev/null[m
[1m+++ b/app/bootstrap.php.cache[m
[36m@@ -0,0 +1,1501 @@[m
[32m+[m[32m<?php[m
[32m+[m
[32m+[m[32mnamespace { require_once __DIR__.'/autoload.php'; }[m
[32m+[m
[32m+[m[41m  [m
[32m+[m
[32m+[m
[32m+[m
[32m+[m[32mnamespace Symfony\Component\DependencyInjection[m
[32m+[m[32m{[m
[32m+[m
[32m+[m
[32m+[m[32minterface ContainerAwareInterface[m
[32m+[m[32m{[m
[32m+[m[41m    [m
[32m+[m[32m    public function setContainer(ContainerInterface $container = null);[m
[32m+[m[32m}[m
[32m+[m[32m}[m
[32m+[m[41m [m
[32m+[m
[32m+[m
[32m+[m
[32m+[m[32mnamespace Symfony\Component\DependencyInjection[m
[32m+[m[32m{[m
[32m+[m
[32m+[m
[32m+[m[32minterface ContainerInterface[m
[32m+[m[32m{[m
[32m+[m[32m    const EXCEPTION_ON_INVALID_REFERENCE = 1;[m
[32m+[m[32m    const NULL_ON_INVALID_REFERENCE      = 2;[m
[32m+[m[32m    const IGNORE_ON_INVALID_REFERENCE    = 3;[m
[32m+[m[32m    const SCOPE_CONTAINER                = 'container';[m
[32m+[m[32m    const SCOPE_PROTOTYPE                = 'prototype';[m
[32m+[m
[32m+[m[41m    [m
[32m+[m[32m    public function set($id, $service, $scope = self::SCOPE_CONTAINER);[m
[32m+[m
[32m+[m[41m    [m
[32m+[m[32m    public function get($id, $invalidBehavior = self::EXCEPTION_ON_INVALID_REFERENCE);[m
[32m+[m
[32m+[m[41m    [m
[32m+[m[32m    public function has($id);[m
[32m+[m
[32m+[m[41m    [m
[32m+[m[32m    public function getParameter($name);[m
[32m+[m
[32m+[m[41m    [m
[32m+[m[32m    public function hasParameter($name);[m
[32m+[m
[32m+[m[41m    [m
[32m+[m[32m    public function setParameter($name, $value);[m
[32m+[m
[32m+[m[41m    [m
[32m+[m[32m    public function enterScope($name);[m
[32m+[m
[32m+[m[41m    [m
[32m+[m[32m    public function leaveScope($name);[m
[32m+[m
[32m+[m[41m    [m
[32m+[m[32m    public function addScope(ScopeInterface $scope);[m
[32m+[m
[32m+[m[41m    [m
[32m+[m[32m    public function hasScope($name);[m
[32m+[m
[32m+[m[41m    [m
[32m+[m[32m    public function isScopeActive($name);[m
[32m+[m[32m}[m
[32m+[m[32m}[m
[32m+[m[41m [m
[32m+[m
[32m+[m
[32m+[m
[32m+[m[32mnamespace Symfony\Component\DependencyInjection[m
[32m+[m[32m{[m
[32m+[m
[32m+[m[32muse Symfony\Component\DependencyInjection\Exception\ServiceNotFoundException;[m
[32m+[m[32muse Symfony\Component\DependencyInjection\Exception\ServiceCircularReferenceException;[m
[32m+[m[32muse Symfony\Component\DependencyInjection\ParameterBag\ParameterBagInterface;[m
[32m+[m[32muse Symfony\Component\DependencyInjection\ParameterBag\ParameterBag;[m
[32m+[m[32muse Symfony\Component\DependencyInjection\ParameterBag\FrozenParameterBag;[m
[32m+[m
[32m+[m
[32m+[m[32mclass Container implements ContainerInterface[m
[32m+[m[32m{[m
[32m+[m[32m    protected $parameterBag;[m
[32m+[m[32m    protected $services;[m
[32m+[m[32m    protected $scopes;[m
[32m+[m[32m    protected $scopeChildren;[m
[32m+[m[32m    protected $scopedServices;[m
[32m+[m[32m    protected $scopeStacks;[m
[32m+[m[32m    protected $loading = array();[m
[32m+[m
[32m+[m[41m    [m
[32m+[m[32m    public function __construct(ParameterBagInterface $parameterBag = null)[m
[32m+[m[32m    {[m
[32m+[m[32m        $this->parameterBag = null === $parameterBag ? new ParameterBag() : $parameterBag;[m
[32m+[m
[32m+[m[32m        $this->services       = array();[m
[32m+[m[32m        $this->scopes         = array();[m
[32m+[m[32m        $this->scopeChildren  = array();[m
[32m+[m[32m        $this->scopedServices = array();[m
[32m+[m[32m        $this->scopeStacks    = array();[m
[32m+[m
[32m+[m[32m        $this->set('service_container', $this);[m
[32m+[m[32m    }[m
[32m+[m
[32m+[m[41m    [m
[32m+[m[32m    public function compile()[m
[32m+[m[32m    {[m
[32m+[m[32m        $this->parameterBag->resolve();[m
[32m+[m
[32m+[m[32m        $this->parameterBag = new FrozenParameterBag($this->parameterBag->all());[m
[32m+[m[32m    }[m
[32m+[m
[32m+[m[41m    [m
[32m+[m[32m    public function isFrozen()[m
[32m+[m[32m    {[m
[32m+[m[32m        return $this->parameterBag instanceof FrozenParameterBag;[m
[32m+[m[32m    }[m
[32m+[m
[32m+[m[41m    [m
[32m+[m[32m    public function getParameterBag()[m
[32m+[m[32m    {[m
[32m+[m[32m        return $this->parameterBag;[m
[32m+[m[32m    }[m
[32m+[m
[32m+[m[41m    [m
[32m+[m[32m    public function getParameter($name)[m
[32m+[m[32m    {[m
[32m+[m[32m        return $this->parameterBag->get($name);[m
[32m+[m[32m    }[m
[32m+[m
[32m+[m[41m    [m
[32m+[m[32m    public function hasParameter($name)[m
[32m+[m[32m    {[m
[32m+[m[32m        return $this->parameterBag->has($name);[m
[32m+[m[32m    }[m
[32m+[m
[32m+[m[41m    [m
[32m+[m[32m    public function setParameter($name, $value)[m
[32m+[m[32m    {[m
[32m+[m[32m        $this->parameterBag->set($name, $value);[m
[32m+[m[32m    }[m
[32m+[m
[32m+[m[41m    [m
[32m+[m[32m    public function set($id, $service, $scope = self::SCOPE_CONTAINER)[m
[32m+[m[32m    {[m
[32m+[m[32m        if (self::SCOPE_PROTOTYPE === $scope) {[m
[32m+[m[32m            throw new \InvalidArgumentException('You cannot set services of scope "prototype".');[m
[32m+[m[32m        }[m
[32m+[m
[32m+[m[32m        $id = strtolower($id);[m
[32m+[m
[32m+[m[32m        if (self::SCOPE_CONTAINER !== $scope) {[m
[32m+[m[32m            if (!isset($this->scopedServices[$scope])) {[m
[32m+[m[32m                throw new \RuntimeException('You cannot set services of inactive scopes.');[m
[32m+[m[32m            }[m
[32m+[m
[32m+[m[32m            $this->scopedServices[$scope][$id] = $service;[m
[32m+[m[32m        }[m
[32m+[m
[32m+[m[32m        $this->services[$id] = $service;[m
[32m+[m[32m    }[m
[32m+[m
[32m+[m[41m    [m
[32m+[m[32m    public function has($id)[m
[32m+[m[32m    {[m
[32m+[m[32m        $id = strtolower($id);[m
[32m+[m
[32m+[m[32m        return isset($this->services[$id]) || method_exists($this, 'get'.strtr($id, array('_' => '', '.' => '_')).'Service');[m
[32m+[m[32m    }[m
[32m+[m
[32m+[m[41m    [m
[32m+[m[32m    public function get($id, $invalidBehavior = self::EXCEPTION_ON_INVALID_REFERENCE)[m
[32m+[m[32m    {[m
[32m+[m[32m        $id = strtolower($id);[m
[32m+[m
[32m+[m[32m        if (isset($this->services[$id])) {[m
[32m+[m[32m            return $this->services[$id];[m
[32m+[m[32m        }[m
[32m+[m
[32m+[m[32m        if (isset($this->loading[$id])) {[m
[32m+[m[32m            throw new ServiceCircularReferenceException($id, array_keys($this->loading));[m
[32m+[m[32m        }[m
[32m+[m
[32m+[m[32m        if (method_exists($this, $method = 'get'.strtr($id, array('_' => '', '.' => '_')).'Service')) {[m
[32m+[m[32m            $this->loading[$id] = true;[m
[32m+[m
[32m+[m[32m            try {[m
[32m+[m[32m                $service = $this->$method();[m
[32m+[m[32m            } catch (\Exception $e) {[m
[32m+[m[32m                unset($this->loading[$id]);[m
[32m+[m[32m                throw $e;[m
[32m+[m[32m            }[m
[32m+[m
[32m+[m[32m            unset($this->loading[$id]);[m
[32m+[m
[32m+[m[32m            return $service;[m
[32m+[m[32m        }[m
[32m+[m
[32m+[m[32m        if (self::EXCEPTION_ON_INVALID_REFERENCE === $invalidBehavior) {[m
[32m+[m[32m            throw new ServiceNotFoundException($id);[m
[32m+[m[32m        }[m
[32m+[m[32m    }[m
[32m+[m
[32m+[m[41m    [m
[32m+[m[32m    public function getServiceIds()[m
[32m+[m[32m    {[m
[32m+[m[32m        $ids = array();[m
[32m+[m[32m        $r = new \ReflectionClass($this);[m
[32m+[m[32m        foreach ($r->getMethods() as $method) {[m
[32m+[m[32m            if (preg_match('/^get(.+)Service$/', $method->name, $match)) {[m
[32m+[m[32m                $ids[] = self::underscore($match[1]);[m
[32m+[m[32m            }[m
[32m+[m[32m        }[m
[32m+[m
[32m+[m[32m        return array_unique(array_merge($ids, array_keys($this->services)));[m
[32m+[m[32m    }[m
[32m+[m
[32m+[m[41m    [m
[32m+[m[32m    public function enterScope($name)[m
[32m+[m[32m    {[m
[32m+[m[32m        if (!isset($this->scopes[$name])) {[m
[32m+[m[32m            throw new \InvalidArgumentException(sprintf('The scope "%s" does not exist.', $name));[m
[32m+[m[32m        }[m
[32m+[m
[32m+[m[32m        if (self::SCOPE_CONTAINER !== $this->scopes[$name] && !isset($this->scopedServices[$this->scopes[$name]])) {[m
[32m+[m[32m            throw new \RuntimeException(sprintf('The parent scope "%s" must be active when entering this scope.', $this->scopes[$name]));[m
[32m+[m[32m        }[m
[32m+[m
[32m+[m[32m                                if (isset($this->scopedServices[$name])) {[m
[32m+[m[32m            $services = array($this->services, $name => $this->scopedServices[$name]);[m
[32m+[m[32m            unset($this->scopedServices[$name]);[m
[32m+[m
[32m+[m[32m            foreach ($this->scopeChildren[$name] as $child) {[m
[32m+[m[32m                $services[$child] = $this->scopedServices[$child];[m
[32m+[m[32m                unset($this->scopedServices[$child]);[m
[32m+[m[32m            }[m
[32m+[m
[32m+[m[32m                        $this->services = call_user_func_array('array_diff_key', $services);[m
[32m+[m[32m            array_shift($services);[m
[32m+[m
[32m+[m[32m                        if (!isset($this->scopeStacks[$name])) {[m
[32m+[m[32m                $this->scopeStacks[$name] = new \SplStack();[m
[32m+[m[32m            }[m
[32m+[m[32m            $this->scopeStacks[$name]->push($services);[m
[32m+[m[32m        }[m
[32m+[m
[32m+[m[32m        $this->scopedServices[$name] = array();[m
[32m+[m[32m    }[m
[32m+[m
[32m+[m[41m    [m
[32m+[m[32m    public function leaveScope($name)[m
[32m+[m[32m    {[m
[32m+[m[32m        if (!isset($this->scopedServices[$name])) {[m
[32m+[m[32m            throw new \InvalidArgumentException(sprintf('The scope "%s" is not active.', $name));[m
[32m+[m[32m        }[m
[32m+[m
[32m+[m[32m                        $services = array($this->services, $this->scopedServices[$name]);[m
[32m+[m[32m        unset($this->scopedServices[$name]);[m
[32m+[m[32m        foreach ($this->scopeChildren[$name] as $child) {[m
[32m+[m[32m            if (!isset($this->scopedServices[$child])) {[m
[32m+[m[32m                continue;[m
[32m+[m[32m            }[m
[32m+[m
[32m+[m[32m            $services[] = $this->scopedServices[$child];[m
[32m+[m[32m            unset($this->scopedServices[$child]);[m
[32m+[m[32m        }[m
[32m+[m[32m        $this->services = call_user_func_array('array_diff_key', $services);[m
[32m+[m
[32m+[m[32m                if (isset($this->scopeStacks[$name]) && count($this->scopeStacks[$name]) > 0) {[m
[32m+[m[32m            $services = $this->scopeStacks[$name]->pop();[m
[32m+[m[32m            $this->scopedServices += $services;[m
[32m+[m
[32m+[m[32m            array_unshift($services, $this->services);[m
[32m+[m[32m            $this->services = call_user_func_array('array_merge', $services);[m
[32m+[m[32m        }[m
[32m+[m[32m    }[m
[32m+[m
[32m+[m[41m    [m
[32m+[m[32m    public function addScope(ScopeInterface $scope)[m
[32m+[m[32m    {[m
[32m+[m[32m        $name = $scope->getName();[m
[32m+[m[32m        $parentScope = $scope->getParentName();[m
[32m+[m
[32m+[m[32m        if (self::SCOPE_CONTAINER === $name || self::SCOPE_PROTOTYPE === $name) {[m
[32m+[m[32m            throw new \InvalidArgumentException(sprintf('The scope "%s" is reserved.', $name));[m
[32m+[m[32m        }[m
[32m+[m[32m        if (isset($this->scopes[$name])) {[m
[32m+[m[32m            throw new \InvalidArgumentException(sprintf('A scope with name "%s" already exists.', $name));[m
[32m+[m[32m        }[m
[32m+[m[32m        if (self::SCOPE_CONTAINER !== $parentScope && !isset($this->scopes[$parentScope])) {[m
[32m+[m[32m            throw new \InvalidArgumentException(sprintf('The parent scope "%s" does not exist, or is invalid.', $parentScope));[m
[32m+[m[32m        }[m
[32m+[m
[32m+[m[32m        $this->scopes[$name] = $parentScope;[m
[32m+[m[32m        $this->scopeChildren[$name] = array();[m
[32m+[m
[32m+[m[32m                while ($parentScope !== self::SCOPE_CONTAINER) {[m
[32m+[m[32m            $this->scopeChildren[$parentScope][] = $name;[m
[32m+[m[32m            $parentScope = $this->scopes[$parentScope];[m
[32m+[m[32m        }[m
[32m+[m[32m    }[m
[32m+[m
[32m+[m[41m    [m
[32m+[m[32m    public function hasScope($name)[m
[32m+[m[32m    {[m
[32m+[m[32m        return isset($this->scopes[$name]);[m
[32m+[m[32m    }[m
[32m+[m
[32m+[m[41m    [m
[32m+[m[32m    public function isScopeActive($name)[m
[32m+[m[32m    {[m
[32m+[m[32m        return isset($this->scopedServices[$name]);[m
[32m+[m[32m    }[m
[32m+[m
[32m+[m[41m    [m
[32m+[m[32m    public static function camelize($id)[m
[32m+[m[32m    {[m
[32m+[m[32m        return preg_replace_callback('/(^|_|\.)+(.)/', function ($match) { return ('.' === $match[1] ? '_' : '').strtoupper($match[2]); }, $id);[m
[32m+[m[32m    }[m
[32m+[m
[32m+[m[41m    [m
[32m+[m[32m    public static function underscore($id)[m
[32m+[m[32m    {[m
[32m+[m[32m        return strtolower(preg_replace(array('/([A-Z]+)([A-Z][a-z])/', '/([a-z\d])([A-Z])/'), array('\\1_\\2', '\\1_\\2'), strtr($id, '_', '.')));[m
[32m+[m[32m    }[m
[32m+[m[32m}[m
[32m+[m[32m}[m
[32m+[m[41m [m
[32m+[m
[32m+[m
[32m+[m
[32m+[m[32mnamespace Symfony\Component\HttpKernel[m
[32m+[m[32m{[m
[32m+[m
[32m+[m[32muse Symfony\Component\HttpFoundation\Request;[m
[32m+[m[32muse Symfony\Component\HttpFoundation\Response;[m
[32m+[m
[32m+[m
[32m+[m[32minterface HttpKernelInterface[m
[32m+[m[32m{[m
[32m+[m[32m    const MASTER_REQUEST = 1;[m
[32m+[m[32m    const SUB_REQUEST = 2;[m
[32m+[m
[32m+[m[41m    [m
[32m+[m[32m    public function handle(Request $request, $type = self::MASTER_REQUEST, $catch = true);[m
[32m+[m[32m}[m
[32m+[m[32m}[m
[32m+[m[41m [m
[32m+[m
[32m+[m
[32m+[m
[32m+[m[32mnamespace Symfony\Component\HttpKernel[m
[32m+[m[32m{[m
[32m+[m
[32m+[m[32muse Symfony\Component\DependencyInjection\ContainerInterface;[m
[32m+[m[32muse Symfony\Component\HttpKernel\HttpKernelInterface;[m
[32m+[m[32muse Symfony\Component\HttpKernel\Bundle\BundleInterface;[m
[32m+[m[32muse Symfony\Component\Config\Loader\LoaderInterface;[m
[32m+[m
[32m+[m
[32m+[m[32minterface KernelInterface extends HttpKernelInterface, \Serializable[m
[32m+[m[32m{[m
[32m+[m[41m    [m
[32m+[m[32m    public function registerBundles();[m
[32m+[m
[32m+[m[41m    [m
[32m+[m[32m    public function registerContainerConfiguration(LoaderInterface $loader);[m
[32m+[m
[32m+[m[41m    [m
[32m+[m[32m    public function boot();[m
[32m+[m
[32m+[m[41m    [m
[32m+[m[32m    public function shutdown();[m
[32m+[m
[32m+[m[41m    [m
[32m+[m[32m    public function getBundles();[m
[32m+[m
[32m+[m[41m    [m
[32m+[m[32m    public function isClassInActiveBundle($class);[m
[32m+[m
[32m+[m[41m    [m
[32m+[m[32m    public function getBundle($name, $first = true);[m
[32m+[m
[32m+[m[41m    [m
[32m+[m[32m    public function locateResource($name, $dir = null, $first = true);[m
[32m+[m
[32m+[m[41m    [m
[32m+[m[32m    public function getName();[m
[32m+[m
[32m+[m[41m    [m
[32m+[m[32m    public function getEnvironment();[m
[32m+[m
[32m+[m[41m    [m
[32m+[m[32m    public function isDebug();[m
[32m+[m
[32m+[m[41m    [m
[32m+[m[32m    public function getRootDir();[m
[32m+[m
[32m+[m[41m    [m
[32m+[m[32m    public function getContainer();[m
[32m+[m
[32m+[m[41m    [m
[32m+[m[32m    public function getStartTime();[m
[32m+[m
[32m+[m[41m    [m
[32m+[m[32m    public function getCacheDir();[m
[32m+[m
[32m+[m[41m    [m
[32m+[m[32m    public function getLogDir();[m
[32m+[m[32m}[m
[32m+[m[32m}[m
[32m+[m[41m [m
[32m+[m
[32m+[m
[32m+[m
[32m+[m[32mnamespace Symfony\Component\HttpKernel[m
[32m+[m[32m{[m
[32m+[m
[32m+[m[32muse Symfony\Component\DependencyInjection\ContainerInterface;[m
[32m+[m[32muse Symfony\Component\DependencyInjection\ContainerBuilder;[m
[32m+[m[32muse Symfony\Component\DependencyInjection\Dumper\PhpDumper;[m
[32m+[m[32muse Symfony\Component\DependencyInjection\ParameterBag\ParameterBag;[m
[32m+[m[32muse Symfony\Component\DependencyInjection\Loader\XmlFileLoader;[m
[32m+[m[32muse Symfony\Component\DependencyInjection\Loader\YamlFileLoader;[m
[32m+[m[32muse Symfony\Component\DependencyInjection\Loader\IniFileLoader;[m
[32m+[m[32muse Symfony\Component\DependencyInjection\Loader\PhpFileLoader;[m
[32m+[m[32muse Symfony\Component\DependencyInjection\Loader\ClosureLoader;[m
[32m+[m[32muse Symfony\Component\HttpFoundation\Request;[m
[32m+[m[32muse Symfony\Component\HttpKernel\HttpKernelInterface;[m
[32m+[m[32muse Symfony\Component\HttpKernel\Bundle\BundleInterface;[m
[32m+[m[32muse Symfony\Component\HttpKernel\Config\FileLocator;[m
[32m+[m[32muse Symfony\Component\HttpKernel\DependencyInjection\MergeExtensionConfigurationPass;[m
[32m+[m[32muse Symfony\Component\HttpKernel\DependencyInjection\AddClassesToCachePass;[m
[32m+[m[32muse Symfony\Component\HttpKernel\Debug\ErrorHandler;[m
[32m+[m[32muse Symfony\Component\HttpKernel\Debug\ExceptionHandler;[m
[32m+[m[32muse Symfony\Component\Config\Loader\LoaderResolver;[m
[32m+[m[32muse Symfony\Component\Config\Loader\DelegatingLoader;[m
[32m+[m[32muse Symfony\Component\Config\ConfigCache;[m
[32m+[m[32muse Symfony\Component\ClassLoader\ClassCollectionLoader;[m
[32m+[m[32muse Symfony\Component\ClassLoader\DebugUniversalClassLoader;[m
[32m+[m
[32m+[m
[32m+[m[32mabstract class Kernel implements KernelInterface[m
[32m+[m[32m{[m
[32m+[m[32m    protected $bundles;[m
[32m+[m[32m    protected $bundleMap;[m
[32m+[m[32m    protected $container;[m
[32m+[m[32m    protected $rootDir;[m
[32m+[m[32m    protected $environment;[m
[32m+[m[32m    protected $debug;[m
[32m+[m[32m    protected $booted;[m
[32m+[m[32m    protected $name;[m
[32m+[m[32m    protected $startTime;[m
[32m+[m[32m    protected $classes;[m
[32m+[m
[32m+[m[32m    const VERSION         = '2.0.16';[m
[32m+[m[32m    const VERSION_ID      = '20016';[m
[32m+[m[32m    const MAJOR_VERSION   = '2';[m
[32m+[m[32m    const MINOR_VERSION   = '0';[m
[32m+[m[32m    const RELEASE_VERSION = '16';[m
[32m+[m[32m    const EXTRA_VERSION   = '';[m
[32m+[m
[32m+[m[41m    [m
[32m+[m[32m    public function __construct($environment, $debug)[m
[32m+[m[32m    {[m
[32m+[m[32m        $this->environment = $environment;[m
[32m+[m[32m        $this->debug = (Boolean) $debug;[m
[32m+[m[32m        $this->booted = false;[m
[32m+[m[32m        $this->rootDir = $this->getRootDir();[m
[32m+[m[32m        $this->name = preg_replace('/[^a-zA-Z0-9_]+/', '', basename($this->rootDir));[m
[32m+[m[32m        $this->classes = array();[m
[32m+[m
[32m+[m[32m        if ($this->debug) {[m
[32m+[m[32m            $this->startTime = microtime(true);[m
[32m+[m[32m        }[m
[32m+[m
[32m+[m[32m        $this->init();[m
[32m+[m[32m    }[m
[32m+[m
[32m+[m[32m    public function init()[m
[32m+[m[32m    {[m
[32m+[m[32m        if ($this->debug) {[m
[32m+[m[32m            ini_set('display_errors', 1);[m
[32m+[m[32m            error_reporting(-1);[m
[32m+[m
[32m+[m[32m            DebugUniversalClassLoader::enable();[m
[32m+[m[32m            ErrorHandler::register();[m
[32m+[m[32m            if ('cli' !== php_sapi_name()) {[m
[32m+[m[32m                ExceptionHandler::register();[m
[32m+[m[32m            }[m
[32m+[m[32m        } else {[m
[32m+[m[32m            ini_set('display_errors', 0);[m
[32m+[m[32m        }[m
[32m+[m[32m    }[m
[32m+[m
[32m+[m[32m    public function __clone()[m
[32m+[m[32m    {[m
[32m+[m[32m        if ($this->debug) {[m
[32m+[m[32m            $this->startTime = microtime(true);[m
[32m+[m[32m        }[m
[32m+[m
[32m+[m[32m        $this->booted = false;[m
[32m+[m[32m        $this->container = null;[m
[32m+[m[32m    }[m
[32m+[m
[32m+[m[41m    [m
[32m+[m[32m    public function boot()[m
[32m+[m[32m    {[m
[32m+[m[32m        if (true === $this->booted) {[m
[32m+[m[32m            return;[m
[32m+[m[32m        }[m
[32m+[m
[32m+[m[32m                $this->initializeBundles();[m
[32m+[m
[32m+[m[32m                $this->initializeContainer();[m
[32m+[m
[32m+[m[32m        foreach ($this->getBundles() as $bundle) {[m
[32m+[m[32m            $bundle->setContainer($this->container);[m
[32m+[m[32m            $bundle->boot();[m
[32m+[m[32m        }[m
[32m+[m
[32m+[m[32m        $this->booted = true;[m
[32m+[m[32m    }[m
[32m+[m
[32m+[m[41m    [m
[32m+[m[32m    public function shutdown()[m
[32m+[m[32m    {[m
[32m+[m[32m        if (false === $this->booted) {[m
[32m+[m[32m            return;[m
[32m+[m[32m        }[m
[32m+[m
[32m+[m[32m        $this->booted = false;[m
[32m+[m
[32m+[m[32m        foreach ($this->getBundles() as $bundle) {[m
[32m+[m[32m            $bundle->shutdown();[m
[32m+[m[32m            $bundle->setContainer(null);[m
[32m+[m[32m        }[m
[32m+[m
[32m+[m[32m        $this->container = null;[m
[32m+[m[32m    }[m
[32m+[m
[32m+[m[41m    [m
[32m+[m[32m    public function handle(Request $request, $type = HttpKernelInterface::MASTER_REQUEST, $catch = true)[m
[32m+[m[32m    {[m
[32m+[m[32m        if (false === $this->booted) {[m
[32m+[m[32m            $this->boot();[m
[32m+[m[32m        }[m
[32m+[m
[32m+[m[32m        return $this->getHttpKernel()->handle($request, $type, $catch);[m
[32m+[m[32m    }[m
[32m+[m
[32m+[m[41m    [m
[32m+[m[32m    protected function getHttpKernel()[m
[32m+[m[32m    {[m
[32m+[m[32m        return $this->container->get('http_kernel');[m
[32m+[m[32m    }[m
[32m+[m
[32m+[m[41m    [m
[32m+[m[32m    public function getBundles()[m
[32m+[m[32m    {[m
[32m+[m[32m        return $this->bundles;[m
[32m+[m[32m    }[m
[32m+[m
[32m+[m[41m    [m
[32m+[m[32m    public function isClassInActiveBundle($class)[m
[32m+[m[32m    {[m
[32m+[m[32m        foreach ($this->getBundles() as $bundle) {[m
[32m+[m[32m            if (0 === strpos($class, $bundle->getNamespace())) {[m
[32m+[m[32m                return true;[m
[32m+[m[32m            }[m
[32m+[m[32m        }[m
[32m+[m
[32m+[m[32m        return false;[m
[32m+[m[32m    }[m
[32m+[m
[32m+[m[41m    [m
[32m+[m[32m    public function getBundle($name, $first = true)[m
[32m+[m[32m    {[m
[32m+[m[32m        if (!isset($this->bundleMap[$name])) {[m
[32m+[m[32m            throw new \InvalidArgumentException(sprintf('Bundle "%s" does not exist or it is not enabled. Maybe you forgot to add it in the registerBundles() function of your %s.php file?', $name, get_class($this)));[m
[32m+[m[32m        }[m
[32m+[m
[32m+[m[32m        if (true === $first) {[m
[32m+[m[32m            return $this->bundleMap[$name][0];[m
[32m+[m[32m        }[m
[32m+[m
[32m+[m[32m        return $this->bundleMap[$name];[m
[32m+[m[32m    }[m
[32m+[m
[32m+[m[41m    [m
[32m+[m[32m    public function locateResource($name, $dir = null, $first = true)[m
[32m+[m[32m    {[m
[32m+[m[32m        if ('@' !== $name[0]) {[m
[32m+[m[32m            throw new \InvalidArgumentException(sprintf('A resource name must start with @ ("%s" given).', $name));[m
[32m+[m[32m        }[m
[32m+[m
[32m+[m[32m        if (false !== strpos($name, '..')) {[m
[32m+[m[32m            throw new \RuntimeException(sprintf('File name "%s" contains invalid characters (..).', $name));[m
[32m+[m[32m        }[m
[32m+[m
[32m+[m[32m        $bundleName = substr($name, 1);[m
[32m+[m[32m        $path = '';[m
[32m+[m[32m        if (false !== strpos($bundleName, '/')) {[m
[32m+[m[32m            list($bundleName, $path) = explode('/', $bundleName, 2);[m
[32m+[m[32m        }[m
[32m+[m
[32m+[m[32m        $isResource = 0 === strpos($path, 'Resources') && null !== $dir;[m
[32m+[m[32m        $overridePath = substr($path, 9);[m
[32m+[m[32m        $resourceBundle = null;[m
[32m+[m[32m        $bundles = $this->getBundle($bundleName, false);[m
[32m+[m[32m        $files = array();[m
[32m+[m
[32m+[m[32m        foreach ($bundles as $bundle) {[m
[32m+[m[32m            if ($isResource && file_exists($file = $dir.'/'.$bundle->getName().$overridePath)) {[m
[32m+[m[32m                if (null !== $resourceBundle) {[m
[32m+[m[32m                    throw new \RuntimeException(sprintf('"%s" resource is hidden by a resource from the "%s" derived bundle. Create a "%s" file to override the bundle resource.',[m
[32m+[m[32m                        $file,[m
[32m+[m[32m                        $resourceBundle,[m
[32m+[m[32m                        $dir.'/'.$bundles[0]->getName().$overridePath[m
[32m+[m[32m                    ));[m
[32m+[m[32m                }[m
[32m+[m
[32m+[m[32m                if ($first) {[m
[32m+[m[32m                    return $file;[m
[32m+[m[32m                }[m
[32m+[m[32m                $files[] = $file;[m
[32m+[m[32m            }[m
[32m+[m
[32m+[m[32m            if (file_exists($file = $bundle->getPath().'/'.$path)) {[m
[32m+[m[32m                if ($first && !$isResource) {[m
[32m+[m[32m                    return $file;[m
[32m+[m[32m                }[m
[32m+[m[32m                $files[] = $file;[m
[32m+[m[32m                $resourceBundle = $bundle->getName();[m
[32m+[m[32m            }[m
[32m+[m[32m        }[m
[32m+[m
[32m+[m[32m        if (count($files) > 0) {[m
[32m+[m[32m            return $first && $isResource ? $files[0] : $files;[m
[32m+[m[32m        }[m
[32m+[m
[32m+[m[32m        throw new \InvalidArgumentException(sprintf('Unable to find file "%s".', $name));[m
[32m+[m[32m    }[m
[32m+[m
[32m+[m[41m    [m
[32m+[m[32m    public function getName()[m
[32m+[m[32m    {[m
[32m+[m[32m        return $this->name;[m
[32m+[m[32m    }[m
[32m+[m
[32m+[m[41m    [m
[32m+[m[32m    public function getEnvironment()[m
[32m+[m[32m    {[m
[32m+[m[32m        return $this->environment;[m
[32m+[m[32m    }[m
[32m+[m
[32m+[m[41m    [m
[32m+[m[32m    public function isDebug()[m
[32m+[m[32m    {[m
[32m+[m[32m        return $this->debug;[m
[32m+[m[32m    }[m
[32m+[m
[32m+[m[41m    [m
[32m+[m[32m    public function getRootDir()[m
[32m+[m[32m    {[m
[32m+[m[32m        if (null === $this->rootDir) {[m
[32m+[m[32m            $r = new \ReflectionObject($this);[m
[32m+[m[32m            $this->rootDir = str_replace('\\', '/', dirname($r->getFileName()));[m
[32m+[m[32m        }[m
[32m+[m
[32m+[m[32m        return $this->rootDir;[m
[32m+[m[32m    }[m
[32m+[m
[32m+[m[41m    [m
[32m+[m[32m    public function getContainer()[m
[32m+[m[32m    {[m
[32m+[m[32m        return $this->container;[m
[32m+[m[32m    }[m
[32m+[m
[32m+[m[41m    [m
[32m+[m[32m    public function loadClassCache($name = 'classes', $extension = '.php')[m
[32m+[m[32m    {[m
[32m+[m[32m        if (!$this->booted && file_exists($this->getCacheDir().'/classes.map')) {[m
[32m+[m[32m            ClassCollectionLoader::load(include($this->getCacheDir().'/classes.map'), $this->getCacheDir(), $name, $this->debug, false, $extension);[m
[32m+[m[32m        }[m
[32m+[m[32m    }[m
[32m+[m
[32m+[m[41m    [m
[32m+[m[32m    public function setClassCache(array $classes)[m
[32m+[m[32m    {[m
[32m+[m[32m        file_put_contents($this->getCacheDir().'/classes.map', sprintf('<?php return %s;', var_export($classes, true)));[m
[32m+[m[32m    }[m
[32m+[m
[32m+[m[41m    [m
[32m+[m[32m    public function getStartTime()[m
[32m+[m[32m    {[m
[32m+[m[32m        return $this->debug ? $this->startTime : -INF;[m
[32m+[m[32m    }[m
[32m+[m
[32m+[m[41m    [m
[32m+[m[32m    public function getCacheDir()[m
[32m+[m[32m    {[m
[32m+[m[32m        return $this->rootDir.'/cache/'.$this->environment;[m
[32m+[m[32m    }[m
[32m+[m
[32m+[m[41m    [m
[32m+[m[32m    public function getLogDir()[m
[32m+[m[32m    {[m
[32m+[m[32m        return $this->rootDir.'/logs';[m
[32m+[m[32m    }[m
[32m+[m
[32m+[m[41m    [m
[32m+[m[32m    protected function initializeBundles()[m
[32m+[m[32m    {[m
[32m+[m[32m                $this->bundles = array();[m
[32m+[m[32m        $topMostBundles = array();[m
[32m+[m[32m        $directChildren = array();[m
[32m+[m
[32m+[m[32m        foreach ($this->registerBundles() as $bundle) {[m
[32m+[m[32m            $name = $bundle->getName();[m
[32m+[m[32m            if (isset($this->bundles[$name])) {[m
[32m+[m[32m                throw new \LogicException(sprintf('Trying to register two bundles with the same name "%s"', $name));[m
[32m+[m[32m            }[m
[32m+[m[32m            $this->bundles[$name] = $bundle;[m
[32m+[m
[32m+[m[32m            if ($parentName = $bundle->getParent()) {[m
[32m+[m[32m                if (isset($directChildren[$parentName])) {[m
[32m+[m[32m                    throw new \LogicException(sprintf('Bundle "%s" is directly extended by two bundles "%s" and "%s".', $parentName, $name, $directChildren[$parentName]));[m
[32m+[m[32m                }[m
[32m+[m[32m                if ($parentName == $name) {[m
[32m+[m[32m                    throw new \LogicException(sprintf('Bundle "%s" can not extend itself.', $name));[m
[32m+[m[32m                }[m
[32m+[m[32m                $directChildren[$parentName] = $name;[m
[32m+[m[32m            } else {[m
[32m+[m[32m                $topMostBundles[$name] = $bundle;[m
[32m+[m[32m            }[m
[32m+[m[32m        }[m
[32m+[m
[32m+[m[32m                if (count($diff = array_values(array_diff(array_keys($directChildren), array_keys($this->bundles))))) {[m
[32m+[m[32m            throw new \LogicException(sprintf('Bundle "%s" extends bundle "%s", which is not registered.', $directChildren[$diff[0]], $diff[0]));[m
[32m+[m[32m        }[m
[32m+[m
[32m+[m[32m                $this->bundleMap = array();[m
[32m+[m[32m        foreach ($topMostBundles as $name => $bundle) {[m
[32m+[m[32m            $bundleMap = array($bundle);[m
[32m+[m[32m            $hierarchy = array($name);[m
[32m+[m
[32m+[m[32m            while (isset($directChildren[$name])) {[m
[32m+[m[32m                $name = $directChildren[$name];[m
[32m+[m[32m                array_unshift($bundleMap, $this->bundles[$name]);[m
[32m+[m[32m                $hierarchy[] = $name;[m
[32m+[m[32m            }[m
[32m+[m
[32m+[m[32m            foreach ($hierarchy as $bundle) {[m
[32m+[m[32m                $this->bundleMap[$bundle] = $bundleMap;[m
[32m+[m[32m                array_pop($bundleMap);[m
[32m+[m[32m            }[m
[32m+[m[32m        }[m
[32m+[m
[32m+[m[32m    }[m
[32m+[m
[32m+[m[41m    [m
[32m+[m[32m    protected function getContainerClass()[m
[32m+[m[32m    {[m
[32m+[m[32m        return $this->name.ucfirst($this->environment).($this->debug ? 'Debug' : '').'ProjectContainer';[m
[32m+[m[32m    }[m
[32m+[m
[32m+[m[41m    [m
[32m+[m[32m    protected function getContainerBaseClass()[m
[32m+[m[32m    {[m
[32m+[m[32m        return 'Container';[m
[32m+[m[32m    }[m
[32m+[m
[32m+[m[41m    [m
[32m+[m[32m    protected function initializeContainer()[m
[32m+[m[32m    {[m
[32m+[m[32m        $class = $this->getContainerClass();[m
[32m+[m[32m        $cache = new ConfigCache($this->getCacheDir().'/'.$class.'.php', $this->debug);[m
[32m+[m[32m        $fresh = true;[m
[32m+[m[32m        if (!$cache->isFresh()) {[m
[32m+[m[32m            $container = $this->buildContainer();[m
[32m+[m[32m            $this->dumpContainer($cache, $container, $class, $this->getContainerBaseClass());[m
[32m+[m
[32m+[m[32m            $fresh = false;[m
[32m+[m[32m        }[m
[32m+[m
[32m+[m[32m        require_once $cache;[m
[32m+[m
[32m+[m[32m        $this->container = new $class();[m
[32m+[m[32m        $this->container->set('kernel', $this);[m
[32m+[m
[32m+[m[32m        if (!$fresh && $this->container->has('cache_warmer')) {[m
[32m+[m[32m            $this->container->get('cache_warmer')->warmUp($this->container->getParameter('kernel.cache_dir'));[m
[32m+[m[32m        }[m
[32m+[m[32m    }[m
[32m+[m
[32m+[m[41m    [m
[32m+[m[32m    protected function getKernelParameters()[m
[32m+[m[32m    {[m
[32m+[m[32m        $bundles = array();[m
[32m+[m[32m        foreach ($this->bundles as $name => $bundle) {[m
[32m+[m[32m            $bundles[$name] = get_class($bundle);[m
[32m+[m[32m        }[m
[32m+[m
[32m+[m[32m        return array_merge([m
[32m+[m[32m            array([m
[32m+[m[32m                'kernel.root_dir'        => $this->rootDir,[m
[32m+[m[32m                'kernel.environment'     => $this->environment,[m
[32m+[m[32m                'kernel.debug'           => $this->debug,[m
[32m+[m[32m                'kernel.name'            => $this->name,[m
[32m+[m[32m                'kernel.cache_dir'       => $this->getCacheDir(),[m
[32m+[m[32m                'kernel.logs_dir'        => $this->getLogDir(),[m
[32m+[m[32m                'kernel.bundles'         => $bundles,[m
[32m+[m[32m                'kernel.charset'         => 'UTF-8',[m
[32m+[m[32m                'kernel.container_class' => $this->getContainerClass(),[m
[32m+[m[32m            ),[m
[32m+[m[32m            $this->getEnvParameters()[m
[32m+[m[32m        );[m
[32m+[m[32m    }[m
[32m+[m
[32m+[m[41m    [m
[32m+[m[32m    protected function getEnvParameters()[m
[32m+[m[32m    {[m
[32m+[m[32m        $parameters = array();[m
[32m+[m[32m        foreach ($_SERVER as $key => $value) {[m
[32m+[m[32m            if (0 === strpos($key, 'SYMFONY__')) {[m
[32m+[m[32m                $parameters[strtolower(str_replace('__', '.', substr($key, 9)))] = $value;[m
[32m+[m[32m            }[m
[32m+[m[32m        }[m
[32m+[m
[32m+[m[32m        return $parameters;[m
[32m+[m[32m    }[m
[32m+[m
[32m+[m[41m    [m
[32m+[m[32m    protected function buildContainer()[m
[32m+[m[32m    {[m
[32m+[m[32m        foreach (array('cache' => $this->getCacheDir(), 'logs' => $this->getLogDir()) as $name => $dir) {[m
[32m+[m[32m            if (!is_dir($dir)) {[m
[32m+[m[32m                if (false === @mkdir($dir, 0777, true)) {[m
[32m+[m[32m                    throw new \RuntimeException(sprintf("Unable to create the %s directory (%s)\n", $name, $dir));[m
[32m+[m[32m                }[m
[32m+[m[32m            } elseif (!is_writable($dir)) {[m
[32m+[m[32m                throw new \RuntimeException(sprintf("Unable to write in the %s directory (%s)\n", $name, $dir));[m
[32m+[m[32m            }[m
[32m+[m[32m        }[m
[32m+[m
[32m+[m[32m        $container = new ContainerBuilder(new ParameterBag($this->getKernelParameters()));[m
[32m+[m[32m        $extensions = array();[m
[32m+[m[32m        foreach ($this->bundles as $bundle) {[m
[32m+[m[32m            $bundle->build($container);[m
[32m+[m
[32m+[m[32m            if ($extension = $bundle->getContainerExtension()) {[m
[32m+[m[32m                $container->registerExtension($extension);[m
[32m+[m[32m                $extensions[] = $extension->getAlias();[m
[32m+[m[32m            }[m
[32m+[m
[32m+[m[32m            if ($this->debug) {[m
[32m+[m[32m                $container->addObjectResource($bundle);[m
[32m+[m[32m            }[m
[32m+[m[32m        }[m
[32m+[m[32m        $container->addObjectResource($this);[m
[32m+[m
[32m+[m[32m                $container->getCompilerPassConfig()->setMergePass(new MergeExtensionConfigurationPass($extensions));[m
[32m+[m
[32m+[m[32m        if (null !== $cont = $this->registerContainerConfiguration($this->getContainerLoader($container))) {[m
[32m+[m[32m            $container->merge($cont);[m
[32m+[m[32m        }[m
[32m+[m
[32m+[m[32m        $container->addCompilerPass(new AddClassesToCachePass($this));[m
[32m+[m[32m        $container->compile();[m
[32m+[m
[32m+[m[32m        return $container;[m
[32m+[m[32m    }[m
[32m+[m
[32m+[m[41m    [m
[32m+[m[32m    protected function dumpContainer(ConfigCache $cache, ContainerBuilder $container, $class, $baseClass)[m
[32m+[m[32m    {[m
[32m+[m[32m                $dumper = new PhpDumper($container);[m
[32m+[m[32m        $content = $dumper->dump(array('class' => $class, 'base_class' => $baseClass));[m
[32m+[m[32m        if (!$this->debug) {[m
[32m+[m[32m            $content = self::stripComments($content);[m
[32m+[m[32m        }[m
[32m+[m
[32m+[m[32m        $cache->write($content, $container->getResources());[m
[32m+[m[32m    }[m
[32m+[m
[32m+[m[41m    [m
[32m+[m[32m    protected function getContainerLoader(ContainerInterface $container)[m
[32m+[m[32m    {[m
[32m+[m[32m        $locator = new FileLocator($this);[m
[32m+[m[32m        $resolver = new LoaderResolver(array([m
[32m+[m[32m            new XmlFileLoader($container, $locator),[m
[32m+[m[32m            new YamlFileLoader($container, $locator),[m
[32m+[m[32m            new IniFileLoader($container, $locator),[m
[32m+[m[32m            new PhpFileLoader($container, $locator),[m
[32m+[m[32m            new ClosureLoader($container),[m
[32m+[m[32m        ));[m
[32m+[m
[32m+[m[32m        return new DelegatingLoader($resolver);[m
[32m+[m[32m    }[m
[32m+[m
[32m+[m[41m    [m
[32m+[m[32m    public static function stripComments($source)[m
[32m+[m[32m    {[m
[32m+[m[32m        if (!function_exists('token_get_all')) {[m
[32m+[m[32m            return $source;[m
[32m+[m[32m        }[m
[32m+[m
[32m+[m[32m        $output = '';[m
[32m+[m[32m        foreach (token_get_all($source) as $token) {[m
[32m+[m[32m            if (is_string($token)) {[m
[32m+[m[32m                $output .= $token;[m
[32m+[m[32m            } elseif (!in_array($token[0], array(T_COMMENT, T_DOC_COMMENT))) {[m
[32m+[m[32m                $output .= $token[1];[m
[32m+[m[32m            }[m
[32m+[m[32m        }[m
[32m+[m
[32m+[m[32m                $output = preg_replace(array('/\s+$/Sm', '/\n+/S'), "\n", $output);[m
[32m+[m
[32m+[m[32m        return $output;[m
[32m+[m[32m    }[m
[32m+[m
[32m+[m[32m    public function serialize()[m
[32m+[m[32m    {[m
[32m+[m[32m        return serialize(array($this->environment, $this->debug));[m
[32m+[m[32m    }[m
[32m+[m
[32m+[m[32m    public function unserialize($data)[m
[32m+[m[32m    {[m
[32m+[m[32m        list($environment, $debug) = unserialize($data);[m
[32m+[m
[32m+[m[32m        $this->__construct($environment, $debug);[m
[32m+[m[32m    }[m
[32m+[m[32m}[m
[32m+[m[32m}[m
[32m+[m[41m [m
[32m+[m
[32m+[m
[32m+[m
[32m+[m[32mnamespace Symfony\Component\ClassLoader[m
[32m+[m[32m{[m
[32m+[m
[32m+[m
[32m+[m[32mclass ClassCollectionLoader[m
[32m+[m[32m{[m
[32m+[m[32m    private static $loaded;[m
[32m+[m
[32m+[m[41m    [m
[32m+[m[32m    public static function load($classes, $cacheDir, $name, $autoReload, $adaptive = false, $extension = '.php')[m
[32m+[m[32m    {[m
[32m+[m[32m                if (isset(self::$loaded[$name])) {[m
[32m+[m[32m            return;[m
[32m+[m[32m        }[m
[32m+[m
[32m+[m[32m        self::$loaded[$name] = true;[m
[32m+[m
[32m+[m[32m        if ($adaptive) {[m
[32m+[m[32m                        $classes = array_diff($classes, get_declared_classes(), get_declared_interfaces());[m
[32m+[m
[32m+[m[32m                        $name = $name.'-'.substr(md5(implode('|', $classes)), 0, 5);[m
[32m+[m[32m        }[m
[32m+[m
[32m+[m[32m        $cache = $cacheDir.'/'.$name.$extension;[m
[32m+[m
[32m+[m[32m                $reload = false;[m
[32m+[m[32m        if ($autoReload) {[m
[32m+[m[32m            $metadata = $cacheDir.'/'.$name.$extension.'.meta';[m
[32m+[m[32m            if (!file_exists($metadata) || !file_exists($cache)) {[m
[32m+[m[32m                $reload = true;[m
[32m+[m[32m            } else {[m
[32m+[m[32m                $time = filemtime($cache);[m
[32m+[m[32m                $meta = unserialize(file_get_contents($metadata));[m
[32m+[m
[32m+[m[32m                if ($meta[1] != $classes) {[m
[32m+[m[32m                    $reload = true;[m
[32m+[m[32m                } else {[m
[32m+[m[32m                    foreach ($meta[0] as $resource) {[m
[32m+[m[32m                        if (!file_exists($resource) || filemtime($resource) > $time) {[m
[32m+[m[32m                            $reload = true;[m
[32m+[m
[32m+[m[32m                            break;[m
[32m+[m[32m                        }[m
[32m+[m[32m                    }[m
[32m+[m[32m                }[m
[32m+[m[32m            }[m
[32m+[m[32m        }[m
[32m+[m
[32m+[m[32m        if (!$reload && file_exists($cache)) {[m
[32m+[m[32m            require_once $cache;[m
[32m+[m
[32m+[m[32m            return;[m
[32m+[m[32m        }[m
[32m+[m
[32m+[m[32m        $files = array();[m
[32m+[m[32m        $content = '';[m
[32m+[m[32m        foreach ($classes as $class) {[m
[32m+[m[32m            if (!class_exists($class) && !interface_exists($class) && (!function_exists('trait_exists') || !trait_exists($class))) {[m
[32m+[m[32m                throw new \InvalidArgumentException(sprintf('Unable to load class "%s"', $class));[m
[32m+[m[32m            }[m
[32m+[m
[32m+[m[32m            $r = new \ReflectionClass($class);[m
[32m+[m[32m            $files[] = $r->getFileName();[m
[32m+[m
[32m+[m[32m            $c = preg_replace(array('/^\s*<\?php/', '/\?>\s*$/'), '', file_get_contents($r->getFileName()));[m
[32m+[m
[32m+[m[32m                        if (!$r->inNamespace()) {[m
[32m+[m[32m                $c = "\nnamespace\n{\n".self::stripComments($c)."\n}\n";[m
[32m+[m[32m            } else {[m
[32m+[m[32m                $c = self::fixNamespaceDeclarations('<?php '.$c);[m
[32m+[m[32m                $c = preg_replace('/^\s*<\?php/', '', $c);[m
[32m+[m[32m            }[m
[32m+[m
[32m+[m[32m            $content .= $c;[m
[32m+[m[32m        }[m
[32m+[m
[32m+[m[32m                if (!is_dir(dirname($cache))) {[m
[32m+[m[32m            mkdir(dirname($cache), 0777, true);[m
[32m+[m[32m        }[m
[32m+[m[32m        self::writeCacheFile($cache, '<?php '.$content);[m
[32m+[m
[32m+[m[32m        if ($autoReload) {[m
[32m+[m[32m                        self::writeCacheFile($metadata, serialize(array($files, $classes)));[m
[32m+[m[32m        }[m
[32m+[m[32m    }[m
[32m+[m
[32m+[m[41m    [m
[32m+[m[32m    public static function fixNamespaceDeclarations($source)[m
[32m+[m[32m    {[m
[32m+[m[32m        if (!function_exists('token_get_all')) {[m
[32m+[m[32m            return $source;[m
[32m+[m[32m        }[m
[32m+[m
[32m+[m[32m        $output = '';[m
[32m+[m[32m        $inNamespace = false;[m
[32m+[m[32m        $tokens = token_get_all($source);[m
[32m+[m
[32m+[m[32m        for ($i = 0, $max = count($tokens); $i < $max; $i++) {[m
[32m+[m[32m            $token = $tokens[$i];[m
[32m+[m[32m            if (is_string($token)) {[m
[32m+[m[32m                $output .= $token;[m
[32m+[m[32m            } elseif (in_array($token[0], array(T_COMMENT, T_DOC_COMMENT))) {[m
[32m+[m[32m                                continue;[m
[32m+[m[32m            } elseif (T_NAMESPACE === $token[0]) {[m
[32m+[m[32m                if ($inNamespace) {[m
[32m+[m[32m                    $output .= "}\n";[m
[32m+[m[32m                }[m
[32m+[m[32m                $output .= $token[1];[m
[32m+[m
[32m+[m[32m                                while (($t = $tokens[++$i]) && is_array($t) && in_array($t[0], array(T_WHITESPACE, T_NS_SEPARATOR, T_STRING))) {[m
[32m+[m[32m                    $output .= $t[1];[m
[32m+[m[32m                }[m
[32m+[m[32m                if (is_string($t) && '{' === $t) {[m
[32m+[m[32m                    $inNamespace = false;[m
[32m+[m[32m                    --$i;[m
[32m+[m[32m                } else {[m
[32m+[m[32m                    $output .= "\n{";[m
[32m+[m[32m                    $inNamespace = true;[m
[32m+[m[32m                }[m
[32m+[m[32m            } else {[m
[32m+[m[32m                $output .= $token[1];[m
[32m+[m[32m            }[m
[32m+[m[32m        }[m
[32m+[m
[32m+[m[32m        if ($inNamespace) {[m
[32m+[m[32m            $output .= "}\n";[m
[32m+[m[32m        }[m
[32m+[m
[32m+[m[32m        return $output;[m
[32m+[m[32m    }[m
[32m+[m
[32m+[m[41m    [m
[32m+[m[32m    private static function writeCacheFile($file, $content)[m
[32m+[m[32m    {[m
[32m+[m[32m        $tmpFile = tempnam(dirname($file), basename($file));[m
[32m+[m[32m        if (false !== @file_put_contents($tmpFile, $content) && @rename($tmpFile, $file)) {[m
[32m+[m[32m            chmod($file, 0644);[m
[32m+[m
[32m+[m[32m            return;[m
[32m+[m[32m        }[m
[32m+[m
[32m+[m[32m        throw new \RuntimeException(sprintf('Failed to write cache file "%s".', $file));[m
[32m+[m[32m    }[m
[32m+[m
[32m+[m[41m    [m
[32m+[m[32m    private static function stripComments($source)[m
[32m+[m[32m    {[m
[32m+[m[32m        if (!function_exists('token_get_all')) {[m
[32m+[m[32m            return $source;[m
[32m+[m[32m        }[m
[32m+[m
[32m+[m[32m        $output = '';[m
[32m+[m[32m        foreach (token_get_all($source) as $token) {[m
[32m+[m[32m            if (is_string($token)) {[m
[32m+[m[32m                $output .= $token;[m
[32m+[m[32m            } elseif (!in_array($token[0], array(T_COMMENT, T_DOC_COMMENT))) {[m
[32m+[m[32m                $output .= $token[1];[m
[32m+[m[32m            }[m
[32m+[m[32m        }[m
[32m+[m
[32m+[m[32m                $output = preg_replace(array('/\s+$/Sm', '/\n+/S'), "\n", $output);[m
[32m+[m
[32m+[m[32m        return $output;[m
[32m+[m[32m    }[m
[32m+[m[32m}[m
[32m+[m[32m}[m
[32m+[m[41m [m
[32m+[m
[32m+[m
[32m+[m
[32m+[m[32mnamespace Symfony\Component\ClassLoader[m
[32m+[m[32m{[m
[32m+[m
[32m+[m
[32m+[m[32mclass UniversalClassLoader[m
[32m+[m[32m{[m
[32m+[m[32m    private $namespaces = array();[m
[32m+[m[32m    private $prefixes = array();[m
[32m+[m[32m    private $namespaceFallbacks = array();[m
[32m+[m[32m    private $prefixFallbacks = array();[m
[32m+[m
[32m+[m[41m    [m
[32m+[m[32m    public function getNamespaces()[m
[32m+[m[32m    {[m
[32m+[m[32m        return $this->namespaces;[m
[32m+[m[32m    }[m
[32m+[m
[32m+[m[41m    [m
[32m+[m[32m    public function getPrefixes()[m
[32m+[m[32m    {[m
[32m+[m[32m        return $this->prefixes;[m
[32m+[m[32m    }[m
[32m+[m
[32m+[m[41m    [m
[32m+[m[32m    public function getNamespaceFallbacks()[m
[32m+[m[32m    {[m
[32m+[m[32m        return $this->namespaceFallbacks;[m
[32m+[m[32m    }[m
[32m+[m
[32m+[m[41m    [m
[32m+[m[32m    public function getPrefixFallbacks()[m
[32m+[m[32m    {[m
[32m+[m[32m        return $this->prefixFallbacks;[m
[32m+[m[32m    }[m
[32m+[m
[32m+[m[41m    [m
[32m+[m[32m    public function registerNamespaceFallbacks(array $dirs)[m
[32m+[m[32m    {[m
[32m+[m[32m        $this->namespaceFallbacks = $dirs;[m
[32m+[m[32m    }[m
[32m+[m
[32m+[m[41m    [m
[32m+[m[32m    public function registerPrefixFallbacks(array $dirs)[m
[32m+[m[32m    {[m
[32m+[m[32m        $this->prefixFallbacks = $dirs;[m
[32m+[m[32m    }[m
[32m+[m
[32m+[m[41m    [m
[32m+[m[32m    public function registerNamespaces(array $namespaces)[m
[32m+[m[32m    {[m
[32m+[m[32m        foreach ($namespaces as $namespace => $locations) {[m
[32m+[m[32m            $this->namespaces[$namespace] = (array) $locations;[m
[32m+[m[32m        }[m
[32m+[m[32m    }[m
[32m+[m
[32m+[m[41m    [m
[32m+[m[32m    public function registerNamespace($namespace, $paths)[m
[32m+[m[32m    {[m
[32m+[m[32m        $this->namespaces[$namespace] = (array) $paths;[m
[32m+[m[32m    }[m
[32m+[m
[32m+[m[41m    [m
[32m+[m[32m    public function registerPrefixes(array $classes)[m
[32m+[m[32m    {[m
[32m+[m[32m        foreach ($classes as $prefix => $locations) {[m
[32m+[m[32m            $this->prefixes[$prefix] = (array) $locations;[m
[32m+[m[32m        }[m
[32m+[m[32m    }[m
[32m+[m
[32m+[m[41m    [m
[32m+[m[32m    public function registerPrefix($prefix, $paths)[m
[32m+[m[32m    {[m
[32m+[m[32m        $this->prefixes[$prefix] = (array) $paths;[m
[32m+[m[32m    }[m
[32m+[m
[32m+[m[41m    [m
[32m+[m[32m    public function register($prepend = false)[m
[32m+[m[32m    {[m
[32m+[m[32m        spl_autoload_register(array($this, 'loadClass'), true, $prepend);[m
[32m+[m[32m    }[m
[32m+[m
[32m+[m[41m    [m
[32m+[m[32m    public function loadClass($class)[m
[32m+[m[32m    {[m
[32m+[m[32m        if ($file = $this->findFile($class)) {[m
[32m+[m[32m            require $file;[m
[32m+[m[32m        }[m
[32m+[m[32m    }[m
[32m+[m
[32m+[m[41m    [m
[32m+[m[32m    public function findFile($class)[m
[32m+[m[32m    {[m
[32m+[m[32m        if ('\\' == $class[0]) {[m
[32m+[m[32m            $class = substr($class, 1);[m
[32m+[m[32m        }[m
[32m+[m
[32m+[m[32m        if (false !== $pos = strrpos($class, '\\')) {[m
[32m+[m[32m                        $namespace = substr($class, 0, $pos);[m
[32m+[m[32m            foreach ($this->namespaces as $ns => $dirs) {[m
[32m+[m[32m                if (0 !== strpos($namespace, $ns)) {[m
[32m+[m[32m                    continue;[m
[32m+[m[32m                }[m
[32m+[m
[32m+[m[32m                foreach ($dirs as $dir) {[m
[32m+[m[32m                    $className = substr($class, $pos + 1);[m
[32m+[m[32m                    $file = $dir.DIRECTORY_SEPARATOR.str_replace('\\', DIRECTORY_SEPARATOR, $namespace).DIRECTORY_SEPARATOR.str_replace('_', DIRECTORY_SEPARATOR, $className).'.php';[m
[32m+[m[32m                    if (file_exists($file)) {[m
[32m+[m[32m                        return $file;[m
[32m+[m[32m                    }[m
[32m+[m[32m                }[m
[32m+[m[32m            }[m
[32m+[m
[32m+[m[32m            foreach ($this->namespaceFallbacks as $dir) {[m
[32m+[m[32m                $file = $dir.DIRECTORY_SEPARATOR.str_replace('\\', DIRECTORY_SEPARATOR, $class).'.php';[m
[32m+[m[32m                if (file_exists($file)) {[m
[32m+[m[32m                    return $file;[m
[32m+[m[32m                }[m
[32m+[m[32m            }[m
[32m+[m[32m        } else {[m
[32m+[m[32m                        foreach ($this->prefixes as $prefix => $dirs) {[m
[32m+[m[32m                if (0 !== strpos($class, $prefix)) {[m
[32m+[m[32m                    continue;[m
[32m+[m[32m                }[m
[32m+[m
[32m+[m[32m                foreach ($dirs as $dir) {[m
[32m+[m[32m                    $file = $dir.DIRECTORY_SEPARATOR.str_replace('_', DIRECTORY_SEPARATOR, $class).'.php';[m
[32m+[m[32m                    if (file_exists($file)) {[m
[32m+[m[32m                        return $file;[m
[32m+[m[32m                    }[m
[32m+[m[32m                }[m
[32m+[m[32m            }[m
[32m+[m
[32m+[m[32m            foreach ($this->prefixFallbacks as $dir) {[m
[32m+[m[32m                $file = $dir.DIRECTORY_SEPARATOR.str_replace('_', DIRECTORY_SEPARATOR, $class).'.php';[m
[32m+[m[32m                if (file_exists($file)) {[m
[32m+[m[32m                    return $file;[m
[32m+[m[32m                }[m
[32m+[m[32m            }[m
[32m+[m[32m        }[m
[32m+[m[32m    }[m
[32m+[m[32m}[m
[32m+[m[32m}[m
[32m+[m[41m [m
[32m+[m
[32m+[m
[32m+[m
[32m+[m[32mnamespace Symfony\Component\HttpKernel\Bundle[m
[32m+[m[32m{[m
[32m+[m
[32m+[m[32muse Symfony\Component\DependencyInjection\ContainerAware;[m
[32m+[m[32muse Symfony\Component\DependencyInjection\ContainerBuilder;[m
[32m+[m[32muse Symfony\Component\DependencyInjection\Container;[m
[32m+[m[32muse Symfony\Component\Console\Application;[m
[32m+[m[32muse Symfony\Component\Finder\Finder;[m
[32m+[m
[32m+[m
[32m+[m[32mabstract class Bundle extends ContainerAware implements BundleInterface[m
[32m+[m[32m{[m
[32m+[m[32m    protected $name;[m
[32m+[m[32m    protected $reflected;[m
[32m+[m[32m    protected $extension;[m
[32m+[m
[32m+[m[41m    [m
[32m+[m[32m    public function boot()[m
[32m+[m[32m    {[m
[32m+[m[32m    }[m
[32m+[m
[32m+[m[41m    [m
[32m+[m[32m    public function shutdown()[m
[32m+[m[32m    {[m
[32m+[m[32m    }[m
[32m+[m
[32m+[m[41m    [m
[32m+[m[32m    public function build(ContainerBuilder $container)[m
[32m+[m[32m    {[m
[32m+[m[32m    }[m
[32m+[m
[32m+[m[41m    [m
[32m+[m[32m    public function getContainerExtension()[m
[32m+[m[32m    {[m
[32m+[m[32m        if (null === $this->extension) {[m
[32m+[m[32m            $basename = preg_replace('/Bundle$/', '', $this->getName());[m
[32m+[m
[32m+[m[32m            $class = $this->getNamespace().'\\DependencyInjection\\'.$basename.'Extension';[m
[32m+[m[32m            if (class_exists($class)) {[m
[32m+[m[32m                $extension = new $class();[m
[32m+[m
[32m+[m[32m                                $expectedAlias = Container::underscore($basename);[m
[32m+[m[32m                if ($expectedAlias != $extension->getAlias()) {[m
[32m+[m[32m                    throw new \LogicException(sprintf([m
[32m+[m[32m                        'The extension alias for the default extension of a '.[m
[32m+[m[32m                        'bundle must be the underscored version of the '.[m
[32m+[m[32m                        'bundle name ("%s" instead of "%s")',[m
[32m+[m[32m                        $expectedAlias, $extension->getAlias()[m
[32m+[m[32m                    ));[m
[32m+[m[32m                }[m
[32m+[m
[32m+[m[32m                $this->extension = $extension;[m
[32m+[m[32m            } else {[m
[32m+[m[32m                $this->extension = false;[m
[32m+[m[32m            }[m
[32m+[m[32m        }[m
[32m+[m
[32m+[m[32m        if ($this->extension) {[m
[32m+[m[32m            return $this->extension;[m
[32m+[m[32m        }[m
[32m+[m[32m    }[m
[32m+[m
[32m+[m[41m    [m
[32m+[m[32m    public function getNamespace()[m
[32m+[m[32m    {[m
[32m+[m[32m        if (null === $this->reflected) {[m
[32m+[m[32m            $this->reflected = new \ReflectionObject($this);[m
[32m+[m[32m        }[m
[32m+[m
[32m+[m[32m        return $this->reflected->getNamespaceName();[m
[32m+[m[32m    }[m
[32m+[m
[32m+[m[41m    [m
[32m+[m[32m    public function getPath()[m
[32m+[m[32m    {[m
[32m+[m[32m        if (null === $this->reflected) {[m
[32m+[m[32m            $this->reflected = new \ReflectionObject($this);[m
[32m+[m[32m        }[m
[32m+[m
[32m+[m[32m        return dirname($this->reflected->getFileName());[m
[32m+[m[32m    }[m
[32m+[m
[32m+[m[41m    [m
[32m+[m[32m    public function getParent()[m
[32m+[m[32m    {[m
[32m+[m[32m        return null;[m
[32m+[m[32m    }[m
[32m+[m
[32m+[m[41m    [m
[32m+[m[32m    final public function getName()[m
[32m+[m[32m    {[m
[32m+[m[32m        if (null !== $this->name) {[m
[32m+[m[32m            return $this->name;[m
[32m+[m[32m        }[m
[32m+[m
[32m+[m[32m        $name = get_class($this);[m
[32m+[m[32m        $pos = strrpos($name, '\\');[m
[32m+[m
[32m+[m[32m        return $this->name = false === $pos ? $name :  substr($name, $pos + 1);[m
[32m+[m[32m    }[m
[32m+[m
[32m+[m[41m    [m
[32m+[m[32m    public function registerCommands(Application $application)[m
[32m+[m[32m    {[m
[32m+[m[32m        if (!$dir = realpath($this->getPath().'/Command')) {[m
[32m+[m[32m            return;[m
[32m+[m[32m        }[m
[32m+[m
[32m+[m[32m        $finder = new Finder();[m
[32m+[m[32m        $finder->files()->name('*Command.php')->in($dir);[m
[32m+[m
[32m+[m[32m        $prefix = $this->getNamespace().'\\Command';[m
[32m+[m[32m        foreach ($finder as $file) {[m
[32m+[m[32m            $ns = $prefix;[m
[32m+[m[32m            if ($relativePath = $file->getRelativePath()) {[m
[32m+[m[32m                $ns .= '\\'.strtr($relativePath, '/', '\\');[m
[32m+[m[32m            }[m
[32m+[m[32m            $r = new \ReflectionClass($ns.'\\'.$file->getBasename('.php'));[m
[32m+[m[32m            if ($r->isSubclassOf('Symfony\\Component\\Console\\Command\\Command') && !$r->isAbstract()) {[m
[32m+[m[32m                $application->add($r->newInstance());[m
[32m+[m[32m            }[m
[32m+[m[32m        }[m
[32m+[m[32m    }[m
[32m+[m[32m}[m
[32m+[m[32m}[m
[32m+[m[41m [m
[32m+[m
[32m+[m
[32m+[m
[32m+[m[32mnamespace Symfony\Component\HttpKernel\Bundle[m
[32m+[m[32m{[m
[32m+[m
[32m+[m[32muse Symfony\Component\DependencyInjection\ContainerBuilder;[m
[32m+[m
[32m+[m
[32m+[m[32minterface BundleInterface[m
[32m+[m[32m{[m
[32m+[m[41m    [m
[32m+[m[32m    public function boot();[m
[32m+[m
[32m+[m[41m    [m
[32m+[m[32m    public function shutdown();[m
[32m+[m
[32m+[m[41m    [m
[32m+[m[32m    public function build(ContainerBuilder $container);[m
[32m+[m
[32m+[m[41m    [m
[32m+[m[32m    public function getContainerExtension();[m
[32m+[m
[32m+[m[41m    [m
[32m+[m[32m    public function getParent();[m
[32m+[m
[32m+[m[41m    [m
[32m+[m[32m    public function getName();[m
[32m+[m
[32m+[m[41m    [m
[32m+[m[32m    public function getNamespace();[m
[32m+[m
[32m+[m[41m    [m
[32m+[m[32m    public function getPath();[m
[32m+[m[32m}[m
[32m+[m[32m}[m
[32m+[m[41m [m
[32m+[m
[32m+[m
[32m+[m
[32m+[m[32mnamespace Symfony\Component\Config[m
[32m+[m[32m{[m
[32m+[m
[32m+[m
[32m+[m[32mclass ConfigCache[m
[32m+[m[32m{[m
[32m+[m[32m    private $debug;[m
[32m+[m[32m    private $file;[m
[32m+[m
[32m+[m[41m    [m
[32m+[m[32m    public function __construct($file, $debug)[m
[32m+[m[32m    {[m
[32m+[m[32m        $this->file = $file;[m
[32m+[m[32m        $this->debug = (Boolean) $debug;[m
[32m+[m[32m    }[m
[32m+[m
[32m+[m[41m    [m
[32m+[m[32m    public function __toString()[m
[32m+[m[32m    {[m
[32m+[m[32m        return $this->file;[m
[32m+[m[32m    }[m
[32m+[m
[32m+[m[41m    [m
[32m+[m[32m    public function isFresh()[m
[32m+[m[32m    {[m
[32m+[m[32m        if (!file_exists($this->file)) {[m
[32m+[m[32m            return false;[m
[32m+[m[32m        }[m
[32m+[m
[32m+[m[32m        if (!$this->debug) {[m
[32m+[m[32m            return true;[m
[32m+[m[32m        }[m
[32m+[m
[32m+[m[32m        $metadata = $this->file.'.meta';[m
[32m+[m[32m        if (!file_exists($metadata)) {[m
[32m+[m[32m            return false;[m
[32m+[m[32m        }[m
[32m+[m
[32m+[m[32m        $time = filemtime($this->file);[m
[32m+[m[32m        $meta = unserialize(file_get_contents($metadata));[m
[32m+[m[32m        foreach ($meta as $resource) {[m
[32m+[m[32m            if (!$resource->isFresh($time)) {[m
[32m+[m[32m                return false;[m
[32m+[m[32m            }[m
[32m+[m[32m        }[m
[32m+[m
[32m+[m[32m        return true;[m
[32m+[m[32m    }[m
[32m+[m
[32m+[m[41m    [m
[32m+[m[32m    public function write($content, array $metadata = null)[m
[32m+[m[32m    {[m
[32m+[m[32m        $dir = dirname($this->file);[m
[32m+[m[32m        if (!is_dir($dir)) {[m
[32m+[m[32m            if (false === @mkdir($dir, 0777, true)) {[m
[32m+[m[32m                throw new \RuntimeException(sprintf('Unable to create the %s directory', $dir));[m
[32m+[m[32m            }[m
[32m+[m[32m        } elseif (!is_writable($dir)) {[m
[32m+[m[32m            throw new \RuntimeException(sprintf('Unable to write in the %s directory', $dir));[m
[32m+[m[32m        }[m
[32m+[m
[32m+[m[32m        $tmpFile = tempnam(dirname($this->file), basename($this->file));[m
[32m+[m[32m        if (false !== @file_put_contents($tmpFile, $content) && @rename($tmpFile, $this->file)) {[m
[32m+[m[32m            chmod($this->file, 0666);[m
[32m+[m[32m        } else {[m
[32m+[m[32m            throw new \RuntimeException(sprintf('Failed to write cache file "%s".', $this->file));[m
[32m+[m[32m        }[m
[32m+[m
[32m+[m[32m        if (null !== $metadata && true === $this->debug) {[m
[32m+[m[32m            $file = $this->file.'.meta';[m
[32m+[m[32m            $tmpFile = tempnam(dirname($file), basename($file));[m
[32m+[m[32m            if (false !== @file_put_contents($tmpFile, serialize($metadata)) && @rename($tmpFile, $file)) {[m
[32m+[m[32m                chmod($file, 0666);[m
[32m+[m[32m            }[m
[32m+[m[32m        }[m
[32m+[m[32m    }[m
[32m+[m[32m}[m
[32m+[m[32m}[m
[1mdiff --git a/app/check.php b/app/check.php[m
[1mnew file mode 100644[m
[1mindex 0000000..9481c07[m
[1m--- /dev/null[m
[1m+++ b/app/check.php[m
[36m@@ -0,0 +1,108 @@[m
[32m+[m[32m<?php[m
[32m+[m
[32m+[m[32mif (!$iniPath = get_cfg_var('cfg_file_path')) {[m
[32m+[m[32m    $iniPath = 'WARNING: not using a php.ini file';[m
[32m+[m[32m}[m
[32m+[m
[32m+[m[32mecho "********************************\n";[m
[32m+[m[32mecho "*                              *\n";[m
[32m+[m[32mecho "*  Symfony requirements check  *\n";[m
[32m+[m[32mecho "*                              *\n";[m
[32m+[m[32mecho "********************************\n\n";[m
[32m+[m[32mecho sprintf("php.ini used by PHP: %s\n\n", $iniPath);[m
[32m+[m
[32m+[m[32mecho "** WARNING **\n";[m
[32m+[m[32mecho "*  The PHP CLI can use a different php.ini file\n";[m
[32m+[m[32mecho "*  than the one used with your web server.\n";[m
[32m+[m[32mif ('\\' == DIRECTORY_SEPARATOR) {[m
[32m+[m[32m    echo "*  (especially on the Windows platform)\n";[m
[32m+[m[32m}[m
[32m+[m[32mecho "*  If this is the case, please ALSO launch this\n";[m
[32m+[m[32mecho "*  utility from your web server.\n";[m
[32m+[m[32mecho "** WARNING **\n";[m
[32m+[m
[32m+[m[32m// mandatory[m
[32m+[m[32mecho_title("Mandatory requirements");[m
[32m+[m[32mcheck(version_compare(phpversion(), '5.3.2', '>='), sprintf('Checking that PHP version is at least 5.3.2 (%s installed)', phpversion()), 'Install PHP 5.3.2 or newer (current version is '.phpversion(), true);[m
[32m+[m[32mcheck(ini_get('date.timezone'), 'Checking that the "date.timezone" setting is set', 'Set the "date.timezone" setting in php.ini (like Europe/Paris)', true);[m
[32m+[m[32mcheck(is_writable(__DIR__.'/../app/cache'), sprintf('Checking that app/cache/ directory is writable'), 'Change the permissions of the app/cache/ directory so that the web server can write in it', true);[m
[32m+[m[32mcheck(is_writable(__DIR__.'/../app/logs'), sprintf('Checking that the app/logs/ directory is writable'), 'Change the permissions of the app/logs/ directory so that the web server can write in it', true);[m
[32m+[m[32mcheck(function_exists('json_encode'), 'Checking that the json_encode() is available', 'Install and enable the json extension', true);[m
[32m+[m[32mcheck(class_exists('SQLite3') || in_array('sqlite', PDO::getAvailableDrivers()), 'Checking that the SQLite3 or PDO_SQLite extension is available', 'Install and enable the SQLite3 or PDO_SQLite extension.', true);[m
[32m+[m[32mcheck(function_exists('session_start'), 'Checking that the session_start() is available', 'Install and enable the session extension', true);[m
[32m+[m[32mcheck(function_exists('ctype_alpha'), 'Checking that the ctype_alpha() is available', 'Install and enable the ctype extension', true);[m
[32m+[m[32mcheck(function_exists('token_get_all'), 'Checking that the token_get_all() is available', 'Install and enable the tokenizer extension', true);[m
[32m+[m[32mcheck(!(function_exists('apc_store') && ini_get('apc.enabled')) || version_compare(phpversion('apc'), '3.0.17', '>='), 'Checking that the APC version is at least 3.0.17', 'Upgrade your APC extension (3.0.17+)', true);[m
[32m+[m
[32m+[m[32m// warnings[m
[32m+[m[32mecho_title("Optional checks");[m
[32m+[m[32mcheck(class_exists('DomDocument'), 'Checking that the PHP-XML module is installed', 'Install and enable the php-xml module', false);[m
[32m+[m[32mcheck(function_exists('token_get_all'), 'Checking that the token_get_all() function is available', 'Install and enable the Tokenizer extension (highly recommended)', false);[m
[32m+[m[32mcheck(function_exists('mb_strlen'), 'Checking that the mb_strlen() function is available', 'Install and enable the mbstring extension', false);[m
[32m+[m[32mcheck(function_exists('iconv'), 'Checking that the iconv() function is available', 'Install and enable the iconv extension', false);[m
[32m+[m[32mcheck(function_exists('utf8_decode'), 'Checking that the utf8_decode() is available', 'Install and enable the XML extension', false);[m
[32m+[m[32mif (PHP_OS != 'WINNT') {[m
[32m+[m[32m    check(function_exists('posix_isatty'), 'Checking that the posix_isatty() is available', 'Install and enable the php_posix extension (used to colorized the CLI output)', false);[m
[32m+[m[32m}[m
[32m+[m[32mcheck(class_exists('Locale'), 'Checking that the intl extension is available', 'Install and enable the intl extension (used for validators)', false);[m
[32m+[m[32mif (class_exists('Locale')) {[m
[32m+[m[32m    $version = '';[m
[32m+[m
[32m+[m[32m    if (defined('INTL_ICU_VERSION')) {[m
[32m+[m[32m        $version =  INTL_ICU_VERSION;[m
[32m+[m[32m    } else {[m
[32m+[m[32m        $reflector = new \ReflectionExtension('intl');[m
[32m+[m
[32m+[m[32m        ob_start();[m
[32m+[m[32m        $reflector->info();[m
[32m+[m[32m        $output = strip_tags(ob_get_clean());[m
[32m+[m
[32m+[m[32m        preg_match('/^ICU version +(?:=> )?(.*)$/m', $output, $matches);[m
[32m+[m[32m        $version = $matches[1];[m
[32m+[m[32m    }[m
[32m+[m
[32m+[m[32m    check(version_compare($version, '4.0', '>='), 'Checking that the intl ICU version is at least 4+', 'Upgrade your intl extension with a newer ICU version (4+)', false);[m
[32m+[m[32m}[m
[32m+[m
[32m+[m[32m$accelerator =[m[41m [m
[32m+[m[32m    (function_exists('apc_store') && ini_get('apc.enabled'))[m
[32m+[m[32m    ||[m
[32m+[m[32m    function_exists('eaccelerator_put') && ini_get('eaccelerator.enable')[m
[32m+[m[32m    ||[m
[32m+[m[32m    function_exists('xcache_set')[m
[32m+[m[32m;[m
[32m+[m[32mcheck($accelerator, 'Checking that a PHP accelerator is installed', 'Install a PHP accelerator like APC (highly recommended)', false);[m
[32m+[m
[32m+[m[32mcheck(!ini_get('short_open_tag'), 'Checking that php.ini has short_open_tag set to off', 'Set short_open_tag to off in php.ini', false);[m
[32m+[m[32mcheck(!ini_get('magic_quotes_gpc'), 'Checking that php.ini has magic_quotes_gpc set to off', 'Set magic_quotes_gpc to off in php.ini', false);[m
[32m+[m[32mcheck(!ini_get('register_globals'), 'Checking that php.ini has register_globals set to off', 'Set register_globals to off in php.ini', false);[m
[32m+[m[32mcheck(!ini_get('session.auto_start'), 'Checking that php.ini has session.auto_start set to off', 'Set session.auto_start to off in php.ini', false);[m
[32m+[m
[32m+[m[32mecho_title("Optional checks (Doctrine)");[m
[32m+[m
[32m+[m[32mcheck(class_exists('PDO'), 'Checking that PDO is installed', 'Install PDO (mandatory for Doctrine)', false);[m
[32m+[m[32mif (class_exists('PDO')) {[m
[32m+[m[32m    $drivers = PDO::getAvailableDrivers();[m
[32m+[m[32m    check(count($drivers), 'Checking that PDO has some drivers installed: '.implode(', ', $drivers), 'Install PDO drivers (mandatory for Doctrine)');[m
[32m+[m[32m}[m
[32m+[m
[32m+[m[32m/**[m
[32m+[m[32m * Checks a configuration.[m
[32m+[m[32m */[m
[32m+[m[32mfunction check($boolean, $message, $help = '', $fatal = false)[m
[32m+[m[32m{[m
[32m+[m[32m    echo $boolean ? "  OK        " : sprintf("\n\n[[%s]] ", $fatal ? ' ERROR ' : 'WARNING');[m
[32m+[m[32m    echo sprintf("$message%s\n", $boolean ? '' : ': FAILED');[m
[32m+[m
[32m+[m[32m    if (!$boolean) {[m
[32m+[m[32m        echo "            *** $help ***\n";[m
[32m+[m[32m        if ($fatal) {[m
[32m+[m[32m            exit("You must fix this problem before resuming the check.\n");[m
[32m+[m[32m        }[m
[32m+[m[32m    }[m
[32m+[m[32m}[m
[32m+[m
[32m+[m[32mfunction echo_title($title)[m
[32m+[m[32m{[m
[32m+[m[32m    echo "\n** $title **\n\n";[m
[32m+[m[32m}[m
[1mdiff --git a/app/config/config.yml b/app/config/config.yml[m
[1mnew file mode 100644[m
[1mindex 0000000..b6da31e[m
[1m--- /dev/null[m
[1m+++ b/app/config/config.yml[m
[36m@@ -0,0 +1,60 @@[m
[32m+[m[32mimports:[m
[32m+[m[32m    - { resource: parameters.ini }[m
[32m+[m[32m    - { resource: security.yml }[m
[32m+[m
[32m+[m[32mframework:[m
[32m+[m[32m    #esi:             ~[m
[32m+[m[32m    #translator:      { fallback: %locale% }[m
[32m+[m[32m    secret:          %secret%[m
[32m+[m[32m    charset:         UTF-8[m
[32m+[m[32m    router:          { resource: "%kernel.root_dir%/config/routing.yml" }[m
[32m+[m[32m    form:            true[m
[32m+[m[32m    csrf_protection: true[m
[32m+[m[32m    validation:      { enable_annotations: true }[m
[32m+[m[32m    templating:      { engines: ['twig'] } #assets_version: SomeVersionScheme[m
[32m+[m[32m    session:[m
[32m+[m[32m        default_locale: %locale%[m
[32m+[m[32m        auto_start:     true[m
[32m+[m
[32m+[m[32m# Twig Configuration[m
[32m+[m[32mtwig:[m
[32m+[m[32m    debug:            %kernel.debug%[m
[32m+[m[32m    strict_variables: %kernel.debug%[m
[32m+[m
[32m+[m[32m# Assetic Configuration[m
[32m+[m[32massetic:[m
[32m+[m[32m    debug:          %kernel.debug%[m
[32m+[m[32m    use_controller: false[m
[32m+[m[32m    # java: /usr/bin/java[m
[32m+[m[32m    filters:[m
[32m+[m[32m        cssrewrite: ~[m
[32m+[m[32m        # closure:[m
[32m+[m[32m        #     jar: %kernel.root_dir%/java/compiler.jar[m
[32m+[m[32m        # yui_css:[m
[32m+[m[32m        #     jar: %kernel.root_dir%/java/yuicompressor-2.4.2.jar[m
[32m+[m
[32m+[m[32m# Doctrine Configuration[m
[32m+[m[32mdoctrine:[m
[32m+[m[32m    dbal:[m
[32m+[m[32m        driver:   %database_driver%[m
[32m+[m[32m        host:     %database_host%[m
[32m+[m[32m        port:     %database_port%[m
[32m+[m[32m        dbname:   %database_name%[m
[32m+[m[32m        user:     %database_user%[m
[32m+[m[32m        password: %database_password%[m
[32m+[m[32m        charset:  UTF8[m
[32m+[m
[32m+[m[32m    orm:[m
[32m+[m[32m        auto_generate_proxy_classes: %kernel.debug%[m
[32m+[m[32m        auto_mapping: true[m
[32m+[m
[32m+[m[32m# Swiftmailer Configuration[m
[32m+[m[32mswiftmailer:[m
[32m+[m[32m    transport: %mailer_transport%[m
[32m+[m[32m    host:      %mailer_host%[m
[32m+[m[32m    username:  %mailer_user%[m
[32m+[m[32m    password:  %mailer_password%[m
[32m+[m
[32m+[m[32mjms_security_extra:[m
[32m+[m[32m    secure_controllers:  true[m
[32m+[m[32m    secure_all_services: false[m
[1mdiff --git a/app/config/config_dev.yml b/app/config/config_dev.yml[m
[1mnew file mode 100644[m
[1mindex 0000000..671f52f[m
[1m--- /dev/null[m
[1m+++ b/app/config/config_dev.yml[m
[36m@@ -0,0 +1,23 @@[m
[32m+[m[32mimports:[m
[32m+[m[32m    - { resource: config.yml }[m
[32m+[m
[32m+[m[32mframework:[m
[32m+[m[32m    router:   { resource: "%kernel.root_dir%/config/routing_dev.yml" }[m
[32m+[m[32m    profiler: { only_exceptions: false }[m
[32m+[m
[32m+[m[32mweb_profiler:[m
[32m+[m[32m    toolbar: true[m
[32m+[m[32m    intercept_redirects: false[m
[32m+[m
[32m+[m[32mmonolog:[m
[32m+[m[32m    handlers:[m
[32m+[m[32m        main:[m
[32m+[m[32m            type:  stream[m
[32m+[m[32m            path:  %kernel.logs_dir%/%kernel.environment%.log[m
[32m+[m[32m            level: debug[m
[32m+[m[32m        firephp:[m
[32m+[m[32m            type:  firephp[m
[32m+[m[32m            level: info[m
[32m+[m
[32m+[m[32massetic:[m
[32m+[m[32m    use_controller: true[m
[1mdiff --git a/app/config/config_prod.yml b/app/config/config_prod.yml[m
[1mnew file mode 100644[m
[1mindex 0000000..0b91d4d[m
[1m--- /dev/null[m
[1m+++ b/app/config/config_prod.yml[m
[36m@@ -0,0 +1,19 @@[m
[32m+[m[32mimports:[m
[32m+[m[32m    - { resource: config.yml }[m
[32m+[m
[32m+[m[32m#doctrine:[m
[32m+[m[32m#    orm:[m
[32m+[m[32m#        metadata_cache_driver: apc[m
[32m+[m[32m#        result_cache_driver: apc[m
[32m+[m[32m#        query_cache_driver: apc[m
[32m+[m
[32m+[m[32mmonolog:[m
[32m+[m[32m    handlers:[m
[32m+[m[32m        main:[m
[32m+[m[32m            type:         fingers_crossed[m
[32m+[m[32m            action_level: error[m
[32m+[m[32m            handler:      nested[m
[32m+[m[32m        nested:[m
[32m+[m[32m            type:  stream[m
[32m+[m[32m            path:  %kernel.logs_dir%/%kernel.environment%.log[m
[32m+[m[32m            level: debug[m
[1mdiff --git a/app/config/config_test.yml b/app/config/config_test.yml[m
[1mnew file mode 100644[m
[1mindex 0000000..7dba2fb[m
[1m--- /dev/null[m
[1m+++ b/app/config/config_test.yml[m
[36m@@ -0,0 +1,14 @@[m
[32m+[m[32mimports:[m
[32m+[m[32m    - { resource: config_dev.yml }[m
[32m+[m
[32m+[m[32mframework:[m
[32m+[m[32m    test: ~[m
[32m+[m[32m    session:[m
[32m+[m[32m        storage_id: session.storage.filesystem[m
[32m+[m
[32m+[m[32mweb_profiler:[m
[32m+[m[32m    toolbar: false[m
[32m+[m[32m    intercept_redirects: false[m
[32m+[m
[32m+[m[32mswiftmailer:[m
[32m+[m[32m    disable_delivery: true[m
[1mdiff --git a/app/config/parameters.ini b/app/config/parameters.ini[m
[1mnew file mode 100644[m
[1mindex 0000000..3628066[m
[1m--- /dev/null[m
[1m+++ b/app/config/parameters.ini[m
[36m@@ -0,0 +1,19 @@[m
[32m+[m[32m; These parameters can be imported into other config files[m
[32m+[m[32m; by enclosing the key with % (like %database_user%)[m
[32m+[m[32m; Comments start with ';', as in php.ini[m
[32m+[m[32m[parameters][m
[32m+[m[32m    database_driver   = pdo_mysql[m
[32m+[m[32m    database_host     = localhost[m
[32m+[m[32m    database_port     =[m
[32m+[m[32m    database_name     = symfony[m
[32m+[m[32m    database_user     = root[m
[32m+[m[32m    database_password =[m
[32m+[m
[32m+[m[32m    mailer_transport  = smtp[m
[32m+[m[32m    mailer_host       = localhost[m
[32m+[m[32m    mailer_user       =[m
[32m+[m[32m    mailer_password   =[m
[32m+[m
[32m+[m[32m    locale            = en[m
[32m+[m
[32m+[m[32m    secret            = ThisTokenIsNotSoSecretChangeIt[m
[1mdiff --git a/app/config/routing.yml b/app/config/routing.yml[m
[1mnew file mode 100644[m
[1mindex 0000000..8b4740a[m
[1m--- /dev/null[m
[1m+++ b/app/config/routing.yml[m
[36m@@ -0,0 +1,4 @@[m
[32m+[m[32m# Internal routing configuration to handle ESI[m
[32m+[m[32m#_internal:[m
[32m+[m[32m#   resource: "@FrameworkBundle/Resources/config/routing/internal.xml"[m
[32m+[m[32m#   prefix:   /_internal[m
[1mdiff --git a/app/config/routing_dev.yml b/app/config/routing_dev.yml[m
[1mnew file mode 100644[m
[1mindex 0000000..f3c971e[m
[1m--- /dev/null[m
[1m+++ b/app/config/routing_dev.yml[m
[36m@@ -0,0 +1,31 @@[m
[32m+[m[32m_welcome:[m
[32m+[m[32m    pattern:  /[m
[32m+[m[32m    defaults: { _controller: AcmeDemoBundle:Welcome:index }[m
[32m+[m
[32m+[m[32m_demo_secured:[m
[32m+[m[32m    resource: "@AcmeDemoBundle/Controller/SecuredController.php"[m
[32m+[m[32m    type:     annotation[m
[32m+[m
[32m+[m[32m_demo:[m
[32m+[m[32m    resource: "@AcmeDemoBundle/Controller/DemoController.php"[m
[32m+[m[32m    type:     annotation[m
[32m+[m[32m    prefix:   /demo[m
[32m+[m
[32m+[m[32m_assetic:[m
[32m+[m[32m    resource: .[m
[32m+[m[32m    type:     assetic[m
[32m+[m
[32m+[m[32m_wdt:[m
[32m+[m[32m    resource: "@WebProfilerBundle/Resources/config/routing/wdt.xml"[m
[32m+[m[32m    prefix:   /_wdt[m
[32m+[m
[32m+[m[32m_profiler:[m
[32m+[m[32m    resource: "@WebProfilerBundle/Resources/config/routing/profiler.xml"[m
[32m+[m[32m    prefix:   /_profiler[m
[32m+[m
[32m+[m[32m_configurator:[m
[32m+[m[32m    resource: "@SensioDistributionBundle/Resources/config/routing/webconfigurator.xml"[m
[32m+[m[32m    prefix:   /_configurator[m
[32m+[m
[32m+[m[32m_main:[m
[32m+[m[32m    resource: routing.yml[m
[1mdiff --git a/app/config/security.yml b/app/config/security.yml[m
[1mnew file mode 100644[m
[1mindex 0000000..586d1d0[m
[1m--- /dev/null[m
[1m+++ b/app/config/security.yml[m
[36m@@ -0,0 +1,38 @@[m
[32m+[m[32msecurity:[m
[32m+[m[32m    encoders:[m
[32m+[m[32m        Symfony\Component\Security\Core\User\User: plaintext[m
[32m+[m
[32m+[m[32m    role_hierarchy:[m
[32m+[m[32m        ROLE_ADMIN:       ROLE_USER[m
[32m+[m[32m        ROLE_SUPER_ADMIN: [ROLE_USER, ROLE_ADMIN, ROLE_ALLOWED_TO_SWITCH][m
[32m+[m
[32m+[m[32m    providers:[m
[32m+[m[32m        in_memory:[m
[32m+[m[32m            users:[m
[32m+[m[32m                user:  { password: userpass, roles: [ 'ROLE_USER' ] }[m
[32m+[m[32m                admin: { password: adminpass, roles: [ 'ROLE_ADMIN' ] }[m
[32m+[m
[32m+[m[32m    firewalls:[m
[32m+[m[32m        dev:[m
[32m+[m[32m            pattern:  ^/(_(profiler|wdt)|css|images|js)/[m
[32m+[m[32m            security: false[m
[32m+[m
[32m+[m[32m        login:[m
[32m+[m[32m            pattern:  ^/demo/secured/login$[m
[32m+[m[32m            security: false[m
[32m+[m
[32m+[m[32m        secured_area:[m
[32m+[m[32m            pattern:    ^/demo/secured/[m
[32m+[m[32m            form_login:[m
[32m+[m[32m                check_path: /demo/secured/login_check[m
[32m+[m[32m                login_path: /demo/secured/login[m
[32m+[m[32m            logout:[m
[32m+[m[32m                path:   /demo/secured/logout[m
[32m+[m[32m                target: /demo/[m
[32m+[m[32m            #anonymous: ~[m
[32m+[m[32m            #http_basic:[m
[32m+[m[32m            #    realm: "Secured Demo Area"[m
[32m+[m
[32m+[m[32m    access_control:[m
[32m+[m[32m        #- { path: ^/login, roles: IS_AUTHENTICATED_ANONYMOUSLY, requires_channel: https }[m
[32m+[m[32m        #- { path: ^/_internal, roles: IS_AUTHENTICATED_ANONYMOUSLY, ip: 127.0.0.1 }[m
[1mdiff --git a/app/console b/app/console[m
[1mnew file mode 100644[m
[1mindex 0000000..468cc84[m
[1m--- /dev/null[m
[1m+++ b/app/console[m
[36m@@ -0,0 +1,22 @@[m
[32m+[m[32m#!/usr/bin/env php[m
[32m+[m[32m<?php[m
[32m+[m
[32m+[m[32m// if you don't want to setup permissions the proper way, just uncomment the following PHP line[m
[32m+[m[32m// read http://symfony.com/doc/current/book/installation.html#configuration-and-setup for more information[m
[32m+[m[32m//umask(0000);[m
[32m+[m
[32m+[m[32mset_time_limit(0);[m
[32m+[m
[32m+[m[32mrequire_once __DIR__.'/bootstrap.php.cache';[m
[32m+[m[32mrequire_once __DIR__.'/AppKernel.php';[m
[32m+[m
[32m+[m[32muse Symfony\Bundle\FrameworkBundle\Console\Application;[m
[32m+[m[32muse Symfony\Component\Console\Input\ArgvInput;[m
[32m+[m
[32m+[m[32m$input = new ArgvInput();[m
[32m+[m[32m$env = $input->getParameterOption(array('--env', '-e'), getenv('SYMFONY_ENV') ?: 'dev');[m
[32m+[m[32m$debug = !$input->hasParameterOption(array('--no-debug', ''));[m
[32m+[m
[32m+[m[32m$kernel = new AppKernel($env, $debug);[m
[32m+[m[32m$application = new Application($kernel);[m
[32m+[m[32m$application->run();[m
[1mdiff --git a/app/logs/.gitkeep b/app/logs/.gitkeep[m
[1mnew file mode 100644[m
[1mindex 0000000..e69de29[m
[1mdiff --git a/app/phpunit.xml.dist b/app/phpunit.xml.dist[m
[1mnew file mode 100644[m
[1mindex 0000000..1e31086[m
[1m--- /dev/null[m
[1m+++ b/app/phpunit.xml.dist[m
[36m@@ -0,0 +1,41 @@[m
[32m+[m[32m<?xml version="1.0" encoding="UTF-8"?>[m
[32m+[m
[32m+[m[32m<!-- http://www.phpunit.de/manual/current/en/appendixes.configuration.html -->[m
[32m+[m[32m<phpunit[m
[32m+[m[32m    backupGlobals               = "false"[m
[32m+[m[32m    backupStaticAttributes      = "false"[m
[32m+[m[32m    colors                      = "true"[m
[32m+[m[32m    convertErrorsToExceptions   = "true"[m
[32m+[m[32m    convertNoticesToExceptions  = "true"[m
[32m+[m[32m    convertWarningsToExceptions = "true"[m
[32m+[m[32m    processIsolation            = "false"[m
[32m+[m[32m    stopOnFailure               = "false"[m
[32m+[m[32m    syntaxCheck                 = "false"[m
[32m+[m[32m    bootstrap                   = "bootstrap.php.cache" >[m
[32m+[m
[32m+[m[32m    <testsuites>[m
[32m+[m[32m        <testsuite name="Project Test Suite">[m
[32m+[m[32m            <directory>../src/*/*Bundle/Tests</directory>[m
[32m+[m[32m            <directory>../src/*/Bundle/*Bundle/Tests</directory>[m
[32m+[m[32m        </testsuite>[m
[32m+[m[32m    </testsuites>[m
[32m+[m
[32m+[m[32m    <!--[m
[32m+[m[32m    <php>[m
[32m+[m[32m        <server name="KERNEL_DIR" value="/path/to/your/app/" />[m
[32m+[m[32m    </php>[m
[32m+[m[32m    -->[m
[32m+[m
[32m+[m[32m    <filter>[m
[32m+[m[32m        <whitelist>[m
[32m+[m[32m            <directory>../src</directory>[m
[32m+[m[32m            <exclude>[m
[32m+[m[32m                <directory>../src/*/*Bundle/Resources</directory>[m
[32m+[m[32m                <directory>../src/*/*Bundle/Tests</directory>[m
[32m+[m[32m                <directory>../src/*/Bundle/*Bundle/Resources</directory>[m
[32m+[m[32m                <directory>../src/*/Bundle/*Bundle/Tests</directory>[m
[32m+[m[32m            </exclude>[m
[32m+[m[32m        </whitelist>[m
[32m+[m[32m    </filter>[m
[32m+[m
[32m+[m[32m</phpunit>[m
[1mdiff --git a/bin/.htaccess b/bin/.htaccess[m
[1mnew file mode 100644[m
[1mindex 0000000..3418e55[m
[1m--- /dev/null[m
[1m+++ b/bin/.htaccess[m
[36m@@ -0,0 +1 @@[m
[32m+[m[32mdeny from all[m
\ No newline at end of file[m
[1mdiff --git a/bin/vendors b/bin/vendors[m
[1mnew file mode 100644[m
[1mindex 0000000..1ca43f9[m
[1m--- /dev/null[m
[1m+++ b/bin/vendors[m
[36m@@ -0,0 +1,177 @@[m
[32m+[m[32m#!/usr/bin/env php[m
[32m+[m[32m<?php[m
[32m+[m
[32m+[m[32m/*[m
[32m+[m[32m * This file is part of the Symfony Standard Edition.[m
[32m+[m[32m *[m
[32m+[m[32m * (c) Fabien Potencier <fabien@symfony.com>[m
[32m+[m[32m *[m
[32m+[m[32m * For the full copyright and license information, please view the LICENSE[m
[32m+[m[32m * file that was distributed with this source code.[m
[32m+[m[32m */[m
[32m+[m
[32m+[m[32mset_time_limit(0);[m
[32m+[m
[32m+[m[32m$rootDir = dirname(__DIR__);[m
[32m+[m[32m$vendorDir = $rootDir.'/vendor';[m
[32m+[m
[32m+[m[32marray_shift($argv);[m
[32m+[m[32mif (!isset($argv[0])) {[m
[32m+[m[32m    echo(<<<EOF[m
[32m+[m[32mSymfony2 vendors script management.[m
[32m+[m
[32m+[m[32mSpecify a command to run:[m
[32m+[m
[32m+[m[32m    install: install vendors as specified in deps or deps.lock (recommended)[m
[32m+[m[32m    update:  update vendors to their latest versions (as specified in deps)[m
[32m+[m[32m    lock:    lock vendors to their current versions[m
[32m+[m
[32m+[m
[32m+[m[32mEOF[m
[32m+[m[32m    );[m
[32m+[m[32m    exit(1);[m
[32m+[m[32m}[m
[32m+[m
[32m+[m[32mif (!in_array($command = array_shift($argv), array('install', 'update', 'lock'))) {[m
[32m+[m[32m    echo(sprintf('Command "%s" does not exist.', $command).PHP_EOL);[m
[32m+[m[32m    exit(1);[m
[32m+[m[32m}[m
[32m+[m
[32m+[m[32m/*[m
[32m+[m[32m * Check wether this project is based on the Standard Edition that was[m
[32m+[m[32m * shipped with vendors or not.[m
[32m+[m[32m */[m
[32m+[m[32mif (is_dir($vendorDir.'/symfony') && !is_dir($vendorDir.'/symfony/.git') && !in_array('--reinstall', $argv)) {[m
[32m+[m[32m    echo(<<<EOF[m
[32m+[m[32mYour project seems to be based on a Standard Edition that includes vendors.[m
[32m+[m
[32m+[m[32mTry to run ./bin/vendors install --reinstall[m
[32m+[m
[32m+[m
[32m+[m[32mEOF[m
[32m+[m[32m    );[m
[32m+[m[32m    exit(1);[m
[32m+[m[32m}[m
[32m+[m
[32m+[m[32mif (!is_dir($vendorDir)) {[m
[32m+[m[32m    mkdir($vendorDir, 0777, true);[m
[32m+[m[32m}[m
[32m+[m
[32m+[m[32m// versions[m
[32m+[m[32m$versions = array();[m
[32m+[m[32mif ('install' === $command && file_exists($rootDir.'/deps.lock')) {[m
[32m+[m[32m    foreach (file($rootDir.'/deps.lock', FILE_IGNORE_NEW_LINES | FILE_SKIP_EMPTY_LINES) as $line) {[m
[32m+[m[32m        $parts = array_values(array_filter(explode(' ', $line)));[m
[32m+[m[32m        if (2 !== count($parts)) {[m
[32m+[m[32m            echo(sprintf('The deps version file is not valid (near "%s")', $line).PHP_EOL);[m
[32m+[m[32m            exit(1);[m
[32m+[m[32m        }[m
[32m+[m[32m        $versions[$parts[0]] = $parts[1];[m
[32m+[m[32m    }[m
[32m+[m[32m}[m
[32m+[m
[32m+[m[32m$newversions = array();[m
[32m+[m[32m$deps = parse_ini_file($rootDir.'/deps', true, INI_SCANNER_RAW);[m
[32m+[m[32mif (false === $deps) {[m
[32m+[m[32m    echo('The deps file is not valid ini syntax. Perhaps missing a trailing newline?'.PHP_EOL);[m
[32m+[m[32m    exit(1);[m
[32m+[m[32m}[m
[32m+[m[32mforeach ($deps as $name => $dep) {[m
[32m+[m[32m    $dep = array_map('trim', $dep);[m
[32m+[m
[32m+[m[32m    // install dir[m
[32m+[m[32m    $installDir = isset($dep['target']) ? $vendorDir.'/'.$dep['target'] : $vendorDir.'/'.$name;[m
[32m+[m[32m    if (in_array('--reinstall', $argv) && realpath($installDir)) {[m
[32m+[m[32m        if (defined('PHP_WINDOWS_VERSION_BUILD')) {[m
[32m+[m[32m            system(sprintf('rmdir /S /Q %s', escapeshellarg(realpath($installDir))));[m
[32m+[m[32m        } else {[m
[32m+[m[32m            system(sprintf('rm -rf %s', escapeshellarg($installDir)));[m
[32m+[m[32m        }[m
[32m+[m[32m        clearstatcache();[m
[32m+[m[32m    }[m
[32m+[m
[32m+[m[32m    if ('install' === $command || 'update' === $command) {[m
[32m+[m[32m        echo PHP_EOL.'> Installing/Updating '.$name.PHP_EOL;[m
[32m+[m
[32m+[m[32m        // url[m
[32m+[m[32m        if (!isset($dep['git'])) {[m
[32m+[m[32m            echo(sprintf('The "git" value for the "%s" dependency must be set.', $name).PHP_EOL);[m
[32m+[m[32m            exit(1);[m
[32m+[m[32m        }[m
[32m+[m[32m        $url = $dep['git'];[m
[32m+[m
[32m+[m[32m        if ('update' === $command && is_dir($installDir)) {[m
[32m+[m[32m            ob_start();[m
[32m+[m[32m            system(sprintf('cd %s && git config --get remote.origin.url', escapeshellarg($installDir)));[m
[32m+[m[32m            $current_url = trim(ob_get_clean());[m
[32m+[m[32m            if ($current_url !== $url) {[m
[32m+[m[32m                if (PHP_OS == 'WINNT') {[m
[32m+[m[32m                    system(sprintf('rmdir /S /Q %s', escapeshellarg(realpath($installDir))));[m
[32m+[m[32m                } else {[m
[32m+[m[32m                    system(sprintf('rm -rf %s', escapeshellarg($installDir)));[m
[32m+[m[32m                }[m
[32m+[m[32m                clearstatcache();[m
[32m+[m[32m            }[m
[32m+[m[32m        }[m
[32m+[m
[32m+[m[32m        if (!is_dir($installDir)) {[m
[32m+[m[32m            system(sprintf('git clone %s %s', escapeshellarg($url), escapeshellarg($installDir)));[m
[32m+[m[32m        }[m
[32m+[m
[32m+[m[32m        // revision[m
[32m+[m[32m        if (isset($versions[$name])) {[m
[32m+[m[32m            $rev = $versions[$name];[m
[32m+[m[32m        } else {[m
[32m+[m[32m            $rev = isset($dep['version']) ? $dep['version'] : 'origin/HEAD';[m
[32m+[m[32m        }[m
[32m+[m
[32m+[m[32m        $status = system(sprintf('cd %s && git status --porcelain', escapeshellarg($installDir)));[m
[32m+[m[32m        if (!empty($status)) {[m
[32m+[m[32m            echo(sprintf('"%s" has local modifications. Please revert or commit/push them before running this command again.', $name).PHP_EOL);[m
[32m+[m[32m            exit(1);[m
[32m+[m[32m        }[m
[32m+[m[32m        $current_rev = system(sprintf('cd %s && git rev-list --max-count=1 HEAD', escapeshellarg($installDir)));[m
[32m+[m[32m        if ($current_rev === $rev) {[m
[32m+[m[32m            continue;[m
[32m+[m[32m        }[m
[32m+[m
[32m+[m[32m        system(sprintf('cd %s && git fetch origin && git reset --hard %s', escapeshellarg($installDir), escapeshellarg($rev)));[m
[32m+[m[32m    }[m
[32m+[m
[32m+[m[32m    if ('update' === $command || 'lock' === $command) {[m
[32m+[m[32m        ob_start();[m
[32m+[m[32m        system(sprintf('cd %s && git log -n 1 --format=%%H', escapeshellarg($installDir)));[m
[32m+[m[32m        $newversion = trim(ob_get_clean());[m
[32m+[m
[32m+[m[32m        ob_start();[m
[32m+[m[32m        system(sprintf('cd %s && git name-rev --tags --name-only %s', escapeshellarg($installDir), $newversion));[m
[32m+[m[32m        // remove trailing ^0 from tags, those are the tags themselves[m
[32m+[m[32m        $niceversion = preg_replace('/\^0$/', '', trim(ob_get_clean()));[m
[32m+[m
[32m+[m[32m        // undefined is returned in case no name-rev could be found[m
[32m+[m[32m        if ('undefined' !== $niceversion) {[m
[32m+[m[32m            $newversions[] = $name.' '.$niceversion;[m
[32m+[m[32m        } else {[m
[32m+[m[32m            $newversions[] = $name.' '.$newversion;[m
[32m+[m[32m        }[m
[32m+[m[32m    }[m
[32m+[m[32m}[m
[32m+[m
[32m+[m[32m// update?[m
[32m+[m[32mif ('update' === $command || 'lock' === $command) {[m
[32m+[m[32m    echo PHP_EOL.'> Updating deps.lock'.PHP_EOL;[m
[32m+[m
[32m+[m[32m    file_put_contents($rootDir.'/deps.lock', implode("\n", $newversions)."\n");[m
[32m+[m[32m}[m
[32m+[m
[32m+[m[32m// php on windows can't use the shebang line from system()[m
[32m+[m[32m$interpreter = defined('PHP_WINDOWS_VERSION_BUILD') ? 'php.exe' : '';[m
[32m+[m
[32m+[m[32m// Update the bootstrap files[m
[32m+[m[32msystem(sprintf('%s %s %s', $interpreter, escapeshellarg($rootDir.'/vendor/bundles/Sensio/Bundle/DistributionBundle/Resources/bin/build_bootstrap.php'), escapeshellarg($rootDir)));[m
[32m+[m
[32m+[m[32m// Update assets[m
[32m+[m[32msystem(sprintf('%s %s assets:install %s', $interpreter, escapeshellarg($rootDir.'/app/console'), escapeshellarg($rootDir.'/web/')));[m
[32m+[m
[32m+[m[32m// Remove the cache[m
[32m+[m[32msystem(sprintf('%s %s cache:clear --no-warmup', $interpreter, escapeshellarg($rootDir.'/app/console')));[m
[1mdiff --git a/deps b/deps[m
[1mnew file mode 100644[m
[1mindex 0000000..b72bef8[m
[1m--- /dev/null[m
[1m+++ b/deps[m
[36m@@ -0,0 +1,63 @@[m
[32m+[m[32m[symfony][m
[32m+[m[32m    git=http://github.com/symfony/symfony.git[m
[32m+[m[32m    version=origin/2.0[m
[32m+[m
[32m+[m[32m[twig][m
[32m+[m[32m    git=http://github.com/fabpot/Twig.git[m
[32m+[m[32m    version=v1.8.2[m
[32m+[m
[32m+[m[32m[monolog][m
[32m+[m[32m    git=http://github.com/Seldaek/monolog.git[m
[32m+[m[32m    version=1.0.2[m
[32m+[m
[32m+[m[32m[doctrine-common][m
[32m+[m[32m    git=http://github.com/doctrine/common.git[m
[32m+[m[32m    version=2.1.4[m
[32m+[m
[32m+[m[32m[doctrine-dbal][m
[32m+[m[32m    git=http://github.com/doctrine/dbal.git[m
[32m+[m[32m    version=2.1.7[m
[32m+[m
[32m+[m[32m[doctrine][m
[32m+[m[32m    git=http://github.com/doctrine/doctrine2.git[m
[32m+[m[32m    version=2.1.7[m
[32m+[m
[32m+[m[32m[swiftmailer][m
[32m+[m[32m    git=http://github.com/swiftmailer/swiftmailer.git[m
[32m+[m[32m    version=v4.2.0[m
[32m+[m
[32m+[m[32m[assetic][m
[32m+[m[32m    git=http://github.com/kriswallsmith/assetic.git[m
[32m+[m[32m    version=v1.0.3[m
[32m+[m
[32m+[m[32m[twig-extensions][m
[32m+[m[32m    git=http://github.com/fabpot/Twig-extensions.git[m
[32m+[m
[32m+[m[32m[metadata][m
[32m+[m[32m    git=http://github.com/schmittjoh/metadata.git[m
[32m+[m[32m    version=1.0.0[m
[32m+[m
[32m+[m[32m[SensioFrameworkExtraBundle][m
[32m+[m[32m    git=http://github.com/sensio/SensioFrameworkExtraBundle.git[m
[32m+[m[32m    target=/bundles/Sensio/Bundle/FrameworkExtraBundle[m
[32m+[m[32m    version=origin/2.0[m
[32m+[m
[32m+[m[32m[JMSSecurityExtraBundle][m
[32m+[m[32m    git=http://github.com/schmittjoh/JMSSecurityExtraBundle.git[m
[32m+[m[32m    target=/bundles/JMS/SecurityExtraBundle[m
[32m+[m[32m    version=origin/1.0.x[m
[32m+[m
[32m+[m[32m[SensioDistributionBundle][m
[32m+[m[32m    git=http://github.com/sensio/SensioDistributionBundle.git[m
[32m+[m[32m    target=/bundles/Sensio/Bundle/DistributionBundle[m
[32m+[m[32m    version=origin/2.0[m
[32m+[m
[32m+[m[32m[SensioGeneratorBundle][m
[32m+[m[32m    git=http://github.com/sensio/SensioGeneratorBundle.git[m
[32m+[m[32m    target=/bundles/Sensio/Bundle/GeneratorBundle[m
[32m+[m[32m    version=origin/2.0[m
[32m+[m
[32m+[m[32m[AsseticBundle][m
[32m+[m[32m    git=http://github.com/symfony/AsseticBundle.git[m
[32m+[m[32m    target=/bundles/Symfony/Bundle/AsseticBundle[m
[32m+[m[32m    version=origin/2.0[m
[1mdiff --git a/deps.lock b/deps.lock[m
[1mnew file mode 100644[m
[1mindex 0000000..98776b7[m
[1m--- /dev/null[m
[1m+++ b/deps.lock[m
[36m@@ -0,0 +1,15 @@[m
[32m+[m[32msymfony v2.0.16[m
[32m+[m[32mtwig v1.8.2[m
[32m+[m[32mmonolog 1.0.2[m
[32m+[m[32mdoctrine-common 2.1.4[m
[32m+[m[32mdoctrine-dbal 2.1.7[m
[32m+[m[32mdoctrine 2.1.7[m
[32m+[m[32mswiftmailer v4.2.0[m
[32m+[m[32massetic v1.0.3[m
[32m+[m[32mtwig-extensions feb6d3f10c411e2631997c0a905aa581c80305c1[m
[32m+[m[32mmetadata 1.0.0[m
[32m+[m[32mSensioFrameworkExtraBundle 3dcf2d31ad898db2a5ab418cb03b9f701ba2350f[m
[32m+[m[32mJMSSecurityExtraBundle e752f888c51425f71382c056961f10f2be642102[m
[32m+[m[32mSensioDistributionBundle 41a6c5caed65f02bb09c95a90579f047616471fd[m
[32m+[m[32mSensioGeneratorBundle c0118ce370f8da20e43051f2dd1ae331a202ab9c[m
[32m+[m[32mAsseticBundle fbcbaf46df2aa143759319de205e1babcf7dd87d[m
[1mdiff --git a/src/.htaccess b/src/.htaccess[m
[1mnew file mode 100644[m
[1mindex 0000000..3418e55[m
[1m--- /dev/null[m
[1m+++ b/src/.htaccess[m
[36m@@ -0,0 +1 @@[m
[32m+[m[32mdeny from all[m
\ No newline at end of file[m
[1mdiff --git a/src/Acme/DemoBundle/AcmeDemoBundle.php b/src/Acme/DemoBundle/AcmeDemoBundle.php[m
[1mnew file mode 100644[m
[1mindex 0000000..269fc1e[m
[1m--- /dev/null[m
[1m+++ b/src/Acme/DemoBundle/AcmeDemoBundle.php[m
[36m@@ -0,0 +1,9 @@[m
[32m+[m[32m<?php[m
[32m+[m
[32m+[m[32mnamespace Acme\DemoBundle;[m
[32m+[m
[32m+[m[32muse Symfony\Component\HttpKernel\Bundle\Bundle;[m
[32m+[m
[32m+[m[32mclass AcmeDemoBundle extends Bundle[m
[32m+[m[32m{[m
[32m+[m[32m}[m
[1mdiff --git a/src/Acme/DemoBundle/Controller/DemoController.php b/src/Acme/DemoBundle/Controller/DemoController.php[m
[1mnew file mode 100644[m
[1mindex 0000000..23928b0[m
[1m--- /dev/null[m
[1m+++ b/src/Acme/DemoBundle/Controller/DemoController.php[m
[36m@@ -0,0 +1,57 @@[m
[32m+[m[32m<?php[m
[32m+[m
[32m+[m[32mnamespace Acme\DemoBundle\Controller;[m
[32m+[m
[32m+[m[32muse Symfony\Bundle\FrameworkBundle\Controller\Controller;[m
[32m+[m[32muse Symfony\Component\HttpFoundation\RedirectResponse;[m
[32m+[m[32muse Acme\DemoBundle\Form\ContactType;[m
[32m+[m
[32m+[m[32m// these import the "@Route" and "@Template" annotations[m
[32m+[m[32muse Sensio\Bundle\FrameworkExtraBundle\Configuration\Route;[m
[32m+[m[32muse Sensio\Bundle\FrameworkExtraBundle\Configuration\Template;[m
[32m+[m
[32m+[m[32mclass DemoController extends Controller[m
[32m+[m[32m{[m
[32m+[m[32m    /**[m
[32m+[m[32m     * @Route("/", name="_demo")[m
[32m+[m[32m     * @Template()[m
[32m+[m[32m     */[m
[32m+[m[32m    public function indexAction()[m
[32m+[m[32m    {[m
[32m+[m[32m        return array();[m
[32m+[m[32m    }[m
[32m+[m
[32m+[m[32m    /**[m
[32m+[m[32m     * @Route("/hello/{name}", name="_demo_hello")[m
[32m+[m[32m     * @Template()[m
[32m+[m[32m     */[m
[32m+[m[32m    public function helloAction($name)[m
[32m+[m[32m    {[m
[32m+[m[32m        return array('name' => $name);[m
[32m+[m[32m    }[m
[32m+[m
[32m+[m[32m    /**[m
[32m+[m[32m     * @Route("/contact", name="_demo_contact")[m
[32m+[m[32m     * @Template()[m
[32m+[m[32m     */[m
[32m+[m[32m    public function contactAction()[m
[32m+[m[32m    {[m
[32m+[m[32m        $form = $this->get('form.factory')->create(new ContactType());[m
[32m+[m
[32m+[m[32m        $request = $this->get('request');[m
[32m+[m[32m        if ('POST' == $request->getMethod()) {[m
[32m+[m[32m            $form->bindRequest($request);[m
[32m+[m[32m            if ($form->isValid()) {[m
[32m+[m[32m                $mailer = $this->get('mailer');[m
[32m+[m[32m                // .. setup a message and send it[m
[32m+[m[32m                // http://symfony.com/doc/current/cookbook/email.html[m
[32m+[m
[32m+[m[32m                $this->get('session')->setFlash('notice', 'Message sent!');[m
[32m+[m
[32m+[m[32m                return new RedirectResponse($this->generateUrl('_demo'));[m
[32m+[m[32m            }[m
[32m+[m[32m        }[m
[32m+[m
[32m+[m[32m        return array('form' => $form->createView());[m
[32m+[m[32m    }[m
[32m+[m[32m}[m
[1mdiff --git a/src/Acme/DemoBundle/Controller/SecuredController.php b/src/Acme/DemoBundle/Controller/SecuredController.php[m
[1mnew file mode 100644[m
[1mindex 0000000..9848e42[m
[1m--- /dev/null[m
[1m+++ b/src/Acme/DemoBundle/Controller/SecuredController.php[m
[36m@@ -0,0 +1,69 @@[m
[32m+[m[32m<?php[m
[32m+[m
[32m+[m[32mnamespace Acme\DemoBundle\Controller;[m
[32m+[m
[32m+[m[32muse Symfony\Bundle\FrameworkBundle\Controller\Controller;[m
[32m+[m[32muse Symfony\Component\Security\Core\SecurityContext;[m
[32m+[m[32muse Sensio\Bundle\FrameworkExtraBundle\Configuration\Route;[m
[32m+[m[32muse Sensio\Bundle\FrameworkExtraBundle\Configuration\Template;[m
[32m+[m[32muse JMS\SecurityExtraBundle\Annotation\Secure;[m
[32m+[m
[32m+[m[32m/**[m
[32m+[m[32m * @Route("/demo/secured")[m
[32m+[m[32m */[m
[32m+[m[32mclass SecuredController extends Controller[m
[32m+[m[32m{[m
[32m+[m[32m    /**[m
[32m+[m[32m     * @Route("/login", name="_demo_login")[m
[32m+[m[32m     * @Template()[m
[32m+[m[32m     */[m
[32m+[m[32m    public function loginAction()[m
[32m+[m[32m    {[m
[32m+[m[32m        if ($this->get('request')->attributes->has(SecurityContext::AUTHENTICATION_ERROR)) {[m
[32m+[m[32m            $error = $this->get('request')->attributes->get(SecurityContext::AUTHENTICATION_ERROR);[m
[32m+[m[32m        } else {[m
[32m+[m[32m            $error = $this->get('request')->getSession()->get(SecurityContext::AUTHENTICATION_ERROR);[m
[32m+[m[32m        }[m
[32m+[m
[32m+[m[32m        return array([m
[32m+[m[32m            'last_username' => $this->get('request')->getSession()->get(SecurityContext::LAST_USERNAME),[m
[32m+[m[32m            'error'         => $error,[m
[32m+[m[32m        );[m
[32m+[m[32m    }[m
[32m+[m
[32m+[m[32m    /**[m
[32m+[m[32m     * @Route("/login_check", name="_security_check")[m
[32m+[m[32m     */[m
[32m+[m[32m    public function securityCheckAction()[m
[32m+[m[32m    {[m
[32m+[m[32m        // The security layer will intercept this request[m
[32m+[m[32m    }[m
[32m+[m
[32m+[m[32m    /**[m
[32m+[m[32m     * @Route("/logout", name="_demo_logout")[m
[32m+[m[32m     */[m
[32m+[m[32m    public function logoutAction()[m
[32m+[m[32m    {[m
[32m+[m[32m        // The security layer will intercept this request[m
[32m+[m[32m    }[m
[32m+[m
[32m+[m[32m    /**[m
[32m+[m[32m     * @Route("/hello", defaults={"name"="World"}),[m
[32m+[m[32m     * @Route("/hello/{name}", name="_demo_secured_hello")[m
[32m+[m[32m     * @Template()[m
[32m+[m[32m     */[m
[32m+[m[32m    public function helloAction($name)[m
[32m+[m[32m    {[m
[32m+[m[32m        return array('name' => $name);[m
[32m+[m[32m    }[m
[32m+[m
[32m+[m[32m    /**[m
[32m+[m[32m     * @Route("/hello/admin/{name}", name="_demo_secured_hello_admin")[m
[32m+[m[32m     * @Secure(roles="ROLE_ADMIN")[m
[32m+[m[32m     * @Template()[m
[32m+[m[32m     */[m
[32m+[m[32m    public function helloadminAction($name)[m
[32m+[m[32m    {[m
[32m+[m[32m        return array('name' => $name);[m
[32m+[m[32m    }[m
[32m+[m[32m}[m
[1mdiff --git a/src/Acme/DemoBundle/Controller/WelcomeController.php b/src/Acme/DemoBundle/Controller/WelcomeController.php[m
[1mnew file mode 100644[m
[1mindex 0000000..0185aef[m
[1m--- /dev/null[m
[1m+++ b/src/Acme/DemoBundle/Controller/WelcomeController.php[m
[36m@@ -0,0 +1,13 @@[m
[32m+[m[32m<?php[m
[32m+[m
[32m+[m[32mnamespace Acme\DemoBundle\Controller;[m
[32m+[m
[32m+[m[32muse Symfony\Bundle\FrameworkBundle\Controller\Controller;[m
[32m+[m
[32m+[m[32mclass WelcomeController extends Controller[m
[32m+[m[32m{[m
[32m+[m[32m    public function indexAction()[m
[32m+[m[32m    {[m
[32m+[m[32m        return $this->render('AcmeDemoBundle:Welcome:index.html.twig');[m
[32m+[m[32m    }[m
[32m+[m[32m}[m
[1mdiff --git a/src/Acme/DemoBundle/ControllerListener.php b/src/Acme/DemoBundle/ControllerListener.php[m
[1mnew file mode 100644[m
[1mindex 0000000..e0a3ff4[m
[1m--- /dev/null[m
[1m+++ b/src/Acme/DemoBundle/ControllerListener.php[m
[36m@@ -0,0 +1,25 @@[m
[32m+[m[32m<?php[m
[32m+[m
[32m+[m[32mnamespace Acme\DemoBundle;[m
[32m+[m
[32m+[m[32muse Symfony\Component\EventDispatcher\Event;[m
[32m+[m[32muse Symfony\Component\HttpKernel\HttpKernelInterface;[m
[32m+[m[32muse Symfony\Component\HttpKernel\Event\FilterControllerEvent;[m
[32m+[m[32muse Acme\DemoBundle\Twig\Extension\DemoExtension;[m
[32m+[m
[32m+[m[32mclass ControllerListener[m
[32m+[m[32m{[m
[32m+[m[32m    protected $extension;[m
[32m+[m
[32m+[m[32m    public function __construct(DemoExtension $extension)[m
[32m+[m[32m    {[m
[32m+[m[32m        $this->extension = $extension;[m
[32m+[m[32m    }[m
[32m+[m
[32m+[m[32m    public function onKernelController(FilterControllerEvent $event)[m
[32m+[m[32m    {[m
[32m+[m[32m        if (HttpKernelInterface::MASTER_REQUEST === $event->getRequestType()) {[m
[32m+[m[32m            $this->extension->setController($event->getController());[m
[32m+[m[32m        }[m
[32m+[m[32m    }[m
[32m+[m[32m}[m
[1mdiff --git a/src/Acme/DemoBundle/DependencyInjection/AcmeDemoExtension.php b/src/Acme/DemoBundle/DependencyInjection/AcmeDemoExtension.php[m
[1mnew file mode 100644[m
[1mindex 0000000..6dfcc82[m
[1m--- /dev/null[m
[1m+++ b/src/Acme/DemoBundle/DependencyInjection/AcmeDemoExtension.php[m
[36m@@ -0,0 +1,22 @@[m
[32m+[m[32m<?php[m
[32m+[m
[32m+[m[32mnamespace Acme\DemoBundle\DependencyInjection;[m
[32m+[m
[32m+[m[32muse Symfony\Component\DependencyInjection\ContainerBuilder;[m
[32m+[m[32muse Symfony\Component\DependencyInjection\Loader\XmlFileLoader;[m
[32m+[m[32muse Symfony\Component\HttpKernel\DependencyInjection\Extension;[m
[32m+[m[32muse Symfony\Component\Config\FileLocator;[m
[32m+[m
[32m+[m[32mclass AcmeDemoExtension extends Extension[m
[32m+[m[32m{[m
[32m+[m[32m    public function load(array $configs, ContainerBuilder $container)[m
[32m+[m[32m    {[m
[32m+[m[32m        $loader = new XmlFileLoader($container, new FileLocator(__DIR__.'/../Resources/config'));[m
[32m+[m[32m        $loader->load('services.xml');[m
[32m+[m[32m    }[m
[32m+[m
[32m+[m[32m    public function getAlias()[m
[32m+[m[32m    {[m
[32m+[m[32m        return 'acme_demo';[m
[32m+[m[32m    }[m
[32m+[m[32m}[m
[1mdiff --git a/src/Acme/DemoBundle/Form/ContactType.php b/src/Acme/DemoBundle/Form/ContactType.php[m
[1mnew file mode 100644[m
[1mindex 0000000..0206bcc[m
[1m--- /dev/null[m
[1m+++ b/src/Acme/DemoBundle/Form/ContactType.php[m
[36m@@ -0,0 +1,20 @@[m
[32m+[m[32m<?php[m
[32m+[m
[32m+[m[32mnamespace Acme\DemoBundle\Form;[m
[32m+[m
[32m+[m[32muse Symfony\Component\Form\AbstractType;[m
[32m+[m[32muse Symfony\Component\Form\FormBuilder;[m
[32m+[m
[32m+[m[32mclass ContactType extends AbstractType[m
[32m+[m[32m{[m
[32m+[m[32m    public function buildForm(FormBuilder $builder, array $options)[m
[32m+[m[32m    {[m
[32m+[m[32m        $builder->add('email', 'email');[m
[32m+[m[32m        $builder->add('message', 'textarea');[m
[32m+[m[32m    }[m
[32m+[m[41m    [m
[32m+[m[32m    public function getName()[m
[32m+[m[32m    {[m
[32m+[m[32m        return 'contact';[m
[32m+[m[32m    }[m
[32m+[m[32m}[m
[1mdiff --git a/src/Acme/DemoBundle/Resources/config/services.xml b/src/Acme/DemoBundle/Resources/config/services.xml[m
[1mnew file mode 100644[m
[1mindex 0000000..bb60be0[m
[1m--- /dev/null[m
[1m+++ b/src/Acme/DemoBundle/Resources/config/services.xml[m
[36m@@ -0,0 +1,18 @@[m
[32m+[m[32m<?xml version="1.0" ?>[m
[32m+[m
[32m+[m[32m<container xmlns="http://symfony.com/schema/dic/services"[m
[32m+[m[32m    xmlns:xsi="http://www.w3.org/2001/XMLSchema-instance"[m
[32m+[m[32m    xsi:schemaLocation="http://symfony.com/schema/dic/services http://symfony.com/schema/dic/services/services-1.0.xsd">[m
[32m+[m
[32m+[m[32m    <services>[m
[32m+[m[32m        <service id="twig.extension.acme.demo" class="Acme\DemoBundle\Twig\Extension\DemoExtension" public="false">[m
[32m+[m[32m            <tag name="twig.extension" />[m
[32m+[m[32m            <argument type="service" id="twig.loader" />[m
[32m+[m[32m        </service>[m
[32m+[m
[32m+[m[32m        <service id="acme.demo.listener" class="Acme\DemoBundle\ControllerListener">[m
[32m+[m[32m            <tag name="kernel.event_listener" event="kernel.controller" method="onKernelController" />[m
[32m+[m[32m            <argument type="service" id="twig.extension.acme.demo" />[m
[32m+[m[32m        </service>[m
[32m+[m[32m    </services>[m
[32m+[m[32m</container>[m
[1mdiff --git a/src/Acme/DemoBundle/Resources/public/css/demo.css b/src/Acme/DemoBundle/Resources/public/css/demo.css[m
[1mnew file mode 100644[m
[1mindex 0000000..1dd242f[m
[1m--- /dev/null[m
[1m+++ b/src/Acme/DemoBundle/Resources/public/css/demo.css[m
[36m@@ -0,0 +1,293 @@[m
[32m+[m[32m/*[m
[32m+[m[32mCopyright (c) 2010, Yahoo! Inc. All rights reserved.[m
[32m+[m[32mCode licensed under the BSD License:[m
[32m+[m[32mhttp://developer.yahoo.com/yui/license.html[m
[32m+[m[32mversion: 2.8.2r1[m
[32m+[m
[32m+[m[32mReset[m
[32m+[m[32m*/[m
[32m+[m
[32m+[m[32mhtml{color:#000;background:#FFF;}body,div,dl,dt,dd,ul,ol,li,h1,h2,h3,h4,h5,h6,pre,code,form,fieldset,legend,input,button,textarea,p,blockquote,th,td{margin:0;padding:0;}table{border-collapse:collapse;border-spacing:0;}fieldset,img{border:0;}address,caption,cite,code,dfn,em,strong,th,var,optgroup{font-style:inherit;font-weight:inherit;}del,ins{text-decoration:none;}li{list-style:none;}caption,th{text-align:left;}h1,h2,h3,h4,h5,h6{font-size:100%;font-weight:normal;}q:before,q:after{content:'';}abbr,acronym{border:0;font-variant:normal;}sup{vertical-align:baseline;}sub{vertical-align:baseline;}legend{color:#000;}input,button,textarea,select,optgroup,option{font-family:inherit;font-size:inherit;font-style:inherit;font-weight:inherit;}input,button,textarea,select{*font-size:100%;}[m
[32m+[m
[32m+[m[32mhtml, body[m
[32m+[m[32m{[m
[32m+[m[32m    background-color: #EFEFEF;[m
[32m+[m[32m}[m
[32m+[m
[32m+[m[32mbody[m
[32m+[m[32m{[m
[32m+[m[32m    font-size:        14px;[m
[32m+[m[32m    font-family:      "Lucida Sans Unicode", "Lucida Grande", Verdana, Arial, Helvetica, sans-serif;[m
[32m+[m[32m    color:            #313131;[m
[32m+[m[32m}[m
[32m+[m
[32m+[m[32ma[m
[32m+[m[32m{[m
[32m+[m[32m    color:           #08C;[m
[32m+[m[32m    text-decoration: none;[m
[32m+[m[32m}[m
[32m+[m
[32m+[m[32ma:hover[m
[32m+[m[32m{[m
[32m+[m[32m    text-decoration: underline;[m
[32m+[m[32m}[m
[32m+[m
[32m+[m[32mstrong[m
[32m+[m[32m{[m
[32m+[m[32m    font-weight: bold;[m
[32m+[m[32m}[m
[32m+[m
[32m+[m[32mem[m
[32m+[m[32m{[m
[32m+[m[32m    font-style: italic;[m
[32m+[m[32m}[m
[32m+[m
[32m+[m[32mh1, h2, h3[m
[32m+[m[32m{[m
[32m+[m[32m    font-family:    Georgia, "Times New Roman", Times, serif;[m
[32m+[m[32m    color:          #404040;[m
[32m+[m[32m}[m
[32m+[m
[32m+[m[32mh1[m
[32m+[m[32m{[m
[32m+[m[32m    font-size:      45px;[m
[32m+[m[32m    padding-bottom: 30px;[m
[32m+[m[32m}[m
[32m+[m
[32m+[m[32mh2[m
[32m+[m[32m{[m
[32m+[m[32m    font-weight:   bold;[m
[32m+[m[32m    color:         #FFFFFF;[m
[32m+[m[32m    /* Font is duplicated of body (sans-serif) */[m
[32m+[m[32m    font-family:      "Lucida Sans Unicode", "Lucida Grande", Verdana, Arial, Helvetica, sans-serif;[m
[32m+[m
[32m+[m[32m    margin-bottom:    10px;[m
[32m+[m[32m    background-color: #aacd4e;[m
[32m+[m[32m    padding:          2px 4px;[m
[32m+[m[32m    display:          inline-block;[m
[32m+[m[32m    text-transform:   uppercase;[m
[32m+[m
[32m+[m[32m}[m
[32m+[m
[32m+[m[32mp[m
[32m+[m[32m{[m
[32m+[m[32m    line-height:    20px;[m
[32m+[m[32m    padding-bottom: 20px;[m
[32m+[m[32m}[m
[32m+[m
[32m+[m[32mul#demo-list a[m
[32m+[m[32m{[m
[32m+[m[32m    background: url(../images/blue-arrow.png) no-repeat right 6px;[m
[32m+[m[32m    padding-right: 10px;[m
[32m+[m[32m}[m
[32m+[m
[32m+[m[32mul, ol[m
[32m+[m[32m{[m
[32m+[m[32m    padding-left: 20px;[m
[32m+[m[32m}[m
[32m+[m
[32m+[m[32mli[m
[32m+[m[32m{[m
[32m+[m[32m    padding-bottom: 18px;[m
[32m+[m[32m}[m
[32m+[m
[32m+[m[32mol li[m
[32m+[m[32m{[m
[32m+[m[32m    list-style-type: decimal;[m
[32m+[m[32m}[m
[32m+[m
[32m+[m[32mul li[m
[32m+[m[32m{[m
[32m+[m[32m    list-style-type: none;[m
[32m+[m[32m}[m
[32m+[m
[32m+[m[32m#symfony-header[m
[32m+[m[32m{[m
[32m+[m[32m    position: relative;[m
[32m+[m[32m    padding: 30px 30px 20px 30px;[m
[32m+[m[32m}[m
[32m+[m
[32m+[m[32m#symfony-wrapper[m
[32m+[m[32m{[m
[32m+[m[32m    width:  970px;[m
[32m+[m[32m    margin: 0 auto;[m
[32m+[m[32m}[m
[32m+[m
[32m+[m[32m.symfony-content[m
[32m+[m[32m{[m
[32m+[m[32m    background-color:           white;[m
[32m+[m[32m    border:                     1px solid #DFDFDF;[m
[32m+[m[32m    padding:                    50px;[m
[32m+[m[32m    -moz-border-radius:         16px;[m
[32m+[m[32m    -webkit-border-radius:      16px;[m
[32m+[m[32m    border-radius:              16px;[m
[32m+[m[32m    margin-bottom:              20px;[m
[32m+[m[32m    word-wrap:                  break-word;[m
[32m+[m[32m}[m
[32m+[m
[32m+[m[32m#symfony-search[m
[32m+[m[32m{[m
[32m+[m[32m    position: absolute;[m
[32m+[m[32m    top:   50px;[m
[32m+[m[32m    right: 30px;[m
[32m+[m[32m}[m
[32m+[m
[32m+[m[32m#symfony-search input[type="search"][m
[32m+[m[32m{[m
[32m+[m[32m    -webkit-appearance: textfield;[m
[32m+[m[32m}[m
[32m+[m
[32m+[m[32m#symfony-search-field[m
[32m+[m[32m{[m
[32m+[m[32m    width: 190px;[m
[32m+[m[32m}[m
[32m+[m
[32m+[m[32m#symfony-search label[m
[32m+[m[32m{[m
[32m+[m[32m    display: block;[m
[32m+[m[32m    float: left;[m
[32m+[m[32m    width: 20px;[m
[32m+[m[32m    height: 25px;[m
[32m+[m[32m    background: url(../images/search.png) no-repeat left 5px;[m
[32m+[m[32m}[m
[32m+[m
[32m+[m[32m#symfony-search label span[m
[32m+[m[32m{[m
[32m+[m[32m    display: none;[m
[32m+[m[32m}[m
[32m+[m
[32m+[m[32minput[type=text], input[type=password][m
[32m+[m[32m{[m
[32m+[m[32m    border:      1px solid #DADADA;[m
[32m+[m[32m    background:  white url(../images/field-background.gif) repeat-x left top;[m
[32m+[m[32m    padding:     5px 6px;[m
[32m+[m[32m    color:       #565656;[m
[32m+[m[32m    font-family: 'Lucida Sans Unicode', 'Lucida Grande', Verdana, Arial, Helvetica, sans-serif;[m
[32m+[m[32m    font-size:   12px;[m
[32m+[m[32m}[m
[32m+[m
[32m+[m[32m.symfony-button-grey,[m
[32m+[m[32m.symfony-button-green[m
[32m+[m[32m{[m
[32m+[m[32m    font-size: 0.85em;[m
[32m+[m[32m    font-weight: bold;[m
[32m+[m
[32m+[m[32m    cursor: pointer;[m
[32m+[m
[32m+[m[32m    display: inline-block;[m
[32m+[m[32m    outline: none;[m
[32m+[m
[32m+[m[32m    text-align:     center;[m
[32m+[m[32m    text-transform: uppercase;[m
[32m+[m
[32m+[m[32m    padding: 3px 10px;[m
[32m+[m
[32m+[m[32m    text-shadow: 0 1px 1px rgba(0,0,0,.3);[m
[32m+[m
[32m+[m[32m    -webkit-border-radius: 4px;[m
[32m+[m[32m    -moz-border-radius:    4px;[m
[32m+[m[32m    border-radius:         4px;[m
[32m+[m[32m}[m
[32m+[m
[32m+[m[32m.symfony-button-grey[m
[32m+[m[32m{[m
[32m+[m[32m    color:       #868686;[m
[32m+[m[32m    font-weight: normal;[m
[32m+[m
[32m+[m[32m    padding:    5px 10px;[m
[32m+[m[32m    border:     solid 1px #d7d7d7;[m
[32m+[m[32m    background: #ffffff;[m
[32m+[m[32m    background: -webkit-gradient(linear, left top, left bottom, from(#ffffff), to(#d7d7d7));[m
[32m+[m[32m    background: -moz-linear-gradient(top,  #ffffff,  #d7d7d7);[m
[32m+[m[32m    filter:  progid:DXImageTransform.Microsoft.gradient(startColorstr='#ffffff', endColorstr='#d7d7d7');[m
[32m+[m[32m}[m
[32m+[m
[32m+[m[32m.symfony-button-green[m
[32m+[m[32m{[m
[32m+[m[32m    padding: 5px 12px;[m
[32m+[m
[32m+[m[32m    color: white;[m
[32m+[m
[32m+[m[32m    border:     solid 1px #a7da39;[m
[32m+[m[32m    background: #a7da39;[m
[32m+[m[32m    background: -webkit-gradient(linear, left top, left bottom, from(#a7da39), to(#6a9211));[m
[32m+[m[32m    background: -moz-linear-gradient(top,  #a7da39,  #6a9211);[m
[32m+[m[32m    filter:  progid:DXImageTransform.Microsoft.gradient(startColorstr='#a7da39', endColorstr='#6a9211');[m
[32m+[m[32m}[m
[32m+[m
[32m+[m[32m.symfony-blocks-welcome[m
[32m+[m[32m{[m
[32m+[m[32m    overflow: hidden;[m
[32m+[m[32m}[m
[32m+[m
[32m+[m[32m.symfony-blocks-welcome > div[m
[32m+[m[32m{[m
[32m+[m[32m    background-color: whitesmoke;[m
[32m+[m[32m    float:            left;[m
[32m+[m[32m    width:            240px;[m
[32m+[m[32m    margin-right:     14px;[m
[32m+[m[32m    text-align:       center;[m
[32m+[m[32m    padding:          26px 20px;[m
[32m+[m[32m}[m
[32m+[m
[32m+[m[32m.symfony-blocks-welcome > div.block-demo[m
[32m+[m[32m{[m
[32m+[m[32m    margin-right: 0;[m
[32m+[m[32m}[m
[32m+[m
[32m+[m[32m.symfony-blocks-welcome .illustration[m
[32m+[m[32m{[m
[32m+[m[32m    padding-bottom: 20px;[m
[32m+[m[32m}[m
[32m+[m
[32m+[m[32m.symfony-blocks-help[m
[32m+[m[32m{[m
[32m+[m[32m    overflow: hidden;[m
[32m+[m[32m}[m
[32m+[m
[32m+[m[32m.symfony-blocks-help[m
[32m+[m[32m{[m
[32m+[m[32m    margin-top: 30px;[m
[32m+[m[32m    padding:    18px;[m
[32m+[m[32m    border:     1px solid #E6E6E6;[m
[32m+[m[32m}[m
[32m+[m
[32m+[m[32m.symfony-blocks-help > div[m
[32m+[m[32m{[m
[32m+[m[32m    width:        254px;[m
[32m+[m[32m    float:        left;[m
[32m+[m[32m}[m
[32m+[m
[32m+[m[32m.flash-message[m
[32m+[m[32m{[m
[32m+[m[32m    padding: 10px;[m
[32m+[m[32m    margin: 5px;[m
[32m+[m[32m    margin-top: 15px;[m
[32m+[m[32m    background-color: #ffe;[m
[32m+[m[32m}[m
[32m+[m
[32m+[m[32m.error[m
[32m+[m[32m{[m
[32m+[m[32m    color: red;[m
[32m+[m[32m}[m
[32m+[m
[32m+[m[32m#login label, #contact_form label[m
[32m+[m[32m{[m
[32m+[m[32m    display: block;[m
[32m+[m[32m    float: left;[m
[32m+[m[32m    width: 90px;[m
[32m+[m[32m}[m
[32m+[m
[32m+[m[32mul#menu[m
[32m+[m[32m{[m
[32m+[m[32m    float: right;[m
[32m+[m[32m    margin-bottom: 20px;[m
[32m+[m[32m    padding-left: 0;[m
[32m+[m[32m}[m
[32m+[m
[32m+[m[32m#menu li[m
[32m+[m[32m{[m
[32m+[m[32m    padding-left: 0;[m
[32m+[m[32m    margin-right: 10px;[m
[32m+[m[32m    display: inline;[m
[32m+[m[32m}[m
[1mdiff --git a/src/Acme/DemoBundle/Resources/public/images/blue-arrow.png b/src/Acme/DemoBundle/Resources/public/images/blue-arrow.png[m
[1mnew file mode 100644[m
[1mindex 0000000..fa82d4b[m
Binary files /dev/null and b/src/Acme/DemoBundle/Resources/public/images/blue-arrow.png differ
[1mdiff --git a/src/Acme/DemoBundle/Resources/public/images/field-background.gif b/src/Acme/DemoBundle/Resources/public/images/field-background.gif[m
[1mnew file mode 100644[m
[1mindex 0000000..7c0efc1[m
Binary files /dev/null and b/src/Acme/DemoBundle/Resources/public/images/field-background.gif differ
[1mdiff --git a/src/Acme/DemoBundle/Resources/public/images/logo.gif b/src/Acme/DemoBundle/Resources/public/images/logo.gif[m
[1mnew file mode 100644[m
[1mindex 0000000..703cf45[m
Binary files /dev/null and b/src/Acme/DemoBundle/Resources/public/images/logo.gif differ
[1mdiff --git a/src/Acme/DemoBundle/Resources/public/images/search.png b/src/Acme/DemoBundle/Resources/public/images/search.png[m
[1mnew file mode 100644[m
[1mindex 0000000..3c88b6a[m
Binary files /dev/null and b/src/Acme/DemoBundle/Resources/public/images/search.png differ
[1mdiff --git a/src/Acme/DemoBundle/Resources/public/images/welcome-configure.gif b/src/Acme/DemoBundle/Resources/public/images/welcome-configure.gif[m
[1mnew file mode 100644[m
[1mindex 0000000..931179a[m
Binary files /dev/null and b/src/Acme/DemoBundle/Resources/public/images/welcome-configure.gif differ
[1mdiff --git a/src/Acme/DemoBundle/Resources/public/images/welcome-demo.gif b/src/Acme/DemoBundle/Resources/public/images/welcome-demo.gif[m
[1mnew file mode 100644[m
[1mindex 0000000..0623de5[m
Binary files /dev/null and b/src/Acme/DemoBundle/Resources/public/images/welcome-demo.gif differ
[1mdiff --git a/src/Acme/DemoBundle/Resources/public/images/welcome-quick-tour.gif b/src/Acme/DemoBundle/Resources/public/images/welcome-quick-tour.gif[m
[1mnew file mode 100644[m
[1mindex 0000000..b9018b1[m
Binary files /dev/null and b/src/Acme/DemoBundle/Resources/public/images/welcome-quick-tour.gif differ
[1mdiff --git a/src/Acme/DemoBundle/Resources/views/Demo/contact.html.twig b/src/Acme/DemoBundle/Resources/views/Demo/contact.html.twig[m
[1mnew file mode 100644[m
[1mindex 0000000..e5b7523[m
[1m--- /dev/null[m
[1m+++ b/src/Acme/DemoBundle/Resources/views/Demo/contact.html.twig[m
[36m@@ -0,0 +1,15 @@[m
[32m+[m[32m{% extends "AcmeDemoBundle::layout.html.twig" %}[m
[32m+[m
[32m+[m[32m{% block title "Symfony - Contact form" %}[m
[32m+[m
[32m+[m[32m{% block content %}[m
[32m+[m[32m    <form action="{{ path('_demo_contact') }}" method="POST" id="contact_form">[m
[32m+[m[32m        {{ form_errors(form) }}[m
[32m+[m
[32m+[m[32m        {{ form_row(form.email) }}[m
[32m+[m[32m        {{ form_row(form.message) }}[m
[32m+[m
[32m+[m[32m        {{ form_rest(form) }}[m
[32m+[m[32m        <input type="submit" value="Send" class="symfony-button-grey" />[m
[32m+[m[32m    </form>[m
[32m+[m[32m{% endblock %}[m
[1mdiff --git a/src/Acme/DemoBundle/Resources/views/Demo/hello.html.twig b/src/Acme/DemoBundle/Resources/views/Demo/hello.html.twig[m
[1mnew file mode 100644[m
[1mindex 0000000..3997ff6[m
[1m--- /dev/null[m
[1m+++ b/src/Acme/DemoBundle/Resources/views/Demo/hello.html.twig[m
[36m@@ -0,0 +1,9 @@[m
[32m+[m[32m{% extends "AcmeDemoBundle::layout.html.twig" %}[m
[32m+[m
[32m+[m[32m{% block title "Hello " ~ name %}[m
[32m+[m
[32m+[m[32m{% block content %}[m
[32m+[m[32m    <h1>Hello {{ name }}!</h1>[m
[32m+[m[32m{% endblock %}[m
[32m+[m
[32m+[m[32m{% set code = code(_self) %}[m
[1mdiff --git a/src/Acme/DemoBundle/Resources/views/Demo/index.html.twig b/src/Acme/DemoBundle/Resources/views/Demo/index.html.twig[m
[1mnew file mode 100644[m
[1mindex 0000000..87329d3[m
[1m--- /dev/null[m
[1m+++ b/src/Acme/DemoBundle/Resources/views/Demo/index.html.twig[m
[36m@@ -0,0 +1,14 @@[m
[32m+[m[32m{% extends "AcmeDemoBundle::layout.html.twig" %}[m
[32m+[m
[32m+[m[32m{% block title "Symfony - Demos" %}[m
[32m+[m
[32m+[m[32m{% block content_header '' %}[m
[32m+[m
[32m+[m[32m{% block content %}[m
[32m+[m[32m    <h1>Available demos</h1>[m
[32m+[m[32m    <ul id="demo-list">[m
[32m+[m[32m        <li><a href="{{ path('_demo_hello', {'name': 'World'}) }}">Hello World</a></li>[m
[32m+[m[32m        <li><a href="{{ path('_demo_secured_hello', {'name': 'World'}) }}">Access the secured area</a>&nbsp;&nbsp;&nbsp;&nbsp;<a href="{{ path('_demo_login') }}">Go to the login page</a></li>[m
[32m+[m[32m        {# <li><a href="{{ path('_demo_contact') }}">Send a Message</a></li> #}[m
[32m+[m[32m    </ul>[m
[32m+[m[32m{% endblock %}[m
[1mdiff --git a/src/Acme/DemoBundle/Resources/views/Secured/hello.html.twig b/src/Acme/DemoBundle/Resources/views/Secured/hello.html.twig[m
[1mnew file mode 100644[m
[1mindex 0000000..c8da283[m
[1m--- /dev/null[m
[1m+++ b/src/Acme/DemoBundle/Resources/views/Secured/hello.html.twig[m
[36m@@ -0,0 +1,11 @@[m
[32m+[m[32m{% extends "AcmeDemoBundle:Secured:layout.html.twig" %}[m
[32m+[m
[32m+[m[32m{% block title "Hello " ~ name %}[m
[32m+[m
[32m+[m[32m{% block content %}[m
[32m+[m[32m    <h1>Hello {{ name }}!</h1>[m
[32m+[m
[32m+[m[32m    <a href="{{ path('_demo_secured_hello_admin', { 'name': name }) }}">Hello resource secured for <strong>admin</strong> only.</a>[m
[32m+[m[32m{% endblock %}[m
[32m+[m
[32m+[m[32m{% set code = code(_self) %}[m
[1mdiff --git a/src/Acme/DemoBundle/Resources/views/Secured/helloadmin.html.twig b/src/Acme/DemoBundle/Resources/views/Secured/helloadmin.html.twig[m
[1mnew file mode 100644[m
[1mindex 0000000..425213e[m
[1m--- /dev/null[m
[1m+++ b/src/Acme/DemoBundle/Resources/views/Secured/helloadmin.html.twig[m
[36m@@ -0,0 +1,9 @@[m
[32m+[m[32m{% extends "AcmeDemoBundle:Secured:layout.html.twig" %}[m
[32m+[m
[32m+[m[32m{% block title "Hello " ~ name %}[m
[32m+[m
[32m+[m[32m{% block content %}[m
[32m+[m[32m    <h1>Hello {{ name }} secured for Admins only!</h1>[m
[32m+[m[32m{% endblock %}[m
[32m+[m
[32m+[m[32m{% set code = code(_self) %}[m
[1mdiff --git a/src/Acme/DemoBundle/Resources/views/Secured/layout.html.twig b/src/Acme/DemoBundle/Resources/views/Secured/layout.html.twig[m
[1mnew file mode 100644[m
[1mindex 0000000..aeea55c[m
[1m--- /dev/null[m
[1m+++ b/src/Acme/DemoBundle/Resources/views/Secured/layout.html.twig[m
[36m@@ -0,0 +1,6 @@[m
[32m+[m[32m{% extends "AcmeDemoBundle::layout.html.twig" %}[m
[32m+[m
[32m+[m[32m{% block content_header_more %}[m
[32m+[m[32m    {{ parent() }}[m
[32m+[m[32m    <li>logged in as <strong>{{ app.user ? app.user.username : 'Anonymous' }}</strong> - <a href="{{ path('_demo_logout') }}">Logout</a></li>[m
[32m+[m[32m{% endblock %}[m
[1mdiff --git a/src/Acme/DemoBundle/Resources/views/Secured/login.html.twig b/src/Acme/DemoBundle/Resources/views/Secured/login.html.twig[m
[1mnew file mode 100644[m
[1mindex 0000000..005175d[m
[1m--- /dev/null[m
[1m+++ b/src/Acme/DemoBundle/Resources/views/Secured/login.html.twig[m
[36m@@ -0,0 +1,29 @@[m
[32m+[m[32m{% extends 'AcmeDemoBundle::layout.html.twig' %}[m
[32m+[m
[32m+[m[32m{% block content %}[m
[32m+[m[32m    <h1>Login</h1>[m
[32m+[m
[32m+[m[32m    <p>[m
[32m+[m[32m        Choose between two default users: <em>user/userpass</em> <small>(ROLE_USER)</small> or <em>admin/adminpass</em> <small>(ROLE_ADMIN)</small>[m
[32m+[m[32m    </p>[m
[32m+[m
[32m+[m[32m    {% if error %}[m
[32m+[m[32m        <div class="error">{{ error.message }}</div>[m
[32m+[m[32m    {% endif %}[m
[32m+[m
[32m+[m[32m    <form action="{{ path("_security_check") }}" method="post" id="login">[m
[32m+[m[32m        <div>[m
[32m+[m[32m            <label for="username">Username</label>[m
[32m+[m[32m            <input type="text" id="username" name="_username" value="{{ last_username }}" />[m
[32m+[m[32m        </div>[m
[32m+[m
[32m+[m[32m        <div>[m
[32m+[m[32m            <label for="password">Password</label>[m
[32m+[m[32m            <input type="password" id="password" name="_password" />[m
[32m+[m[32m        </div>[m
[32m+[m
[32m+[m[32m        <input type="submit" class="symfony-button-grey" value="LOGIN" />[m
[32m+[m[32m    </form>[m
[32m+[m[32m{% endblock %}[m
[32m+[m
[32m+[m[32m{% set code = code(_self) %}[m
[1mdiff --git a/src/Acme/DemoBundle/Resources/views/Welcome/index.html.twig b/src/Acme/DemoBundle/Resources/views/Welcome/index.html.twig[m
[1mnew file mode 100644[m
[1mindex 0000000..88fac0c[m
[1m--- /dev/null[m
[1m+++ b/src/Acme/DemoBundle/Resources/views/Welcome/index.html.twig[m
[36m@@ -0,0 +1,63 @@[m
[32m+[m[32m{% extends 'AcmeDemoBundle::layout.html.twig' %}[m
[32m+[m
[32m+[m[32m{% block title %}Symfony - Welcome{% endblock %}[m
[32m+[m
[32m+[m[32m{% block content_header '' %}[m
[32m+[m
[32m+[m[32m{% block content %}[m
[32m+[m[32m    <h1>Welcome!</h1>[m
[32m+[m
[32m+[m[32m    <p>Congratulations! You have successfully installed a new Symfony application.</p>[m
[32m+[m
[32m+[m[32m    <div class="symfony-blocks-welcome">[m
[32m+[m[32m        <div class="block-quick-tour">[m
[32m+[m[32m            <div class="illustration">[m
[32m+[m[32m                <img src="{{ asset('bundles/acmedemo/images/welcome-quick-tour.gif') }}" alt="Quick tour" />[m
[32m+[m[32m            </div>[m
[32m+[m[32m            <a class="symfony-button-green" href="http://symfony.com/doc/2.0/quick_tour/index.html">Read the Quick Tour</a>[m
[32m+[m[32m        </div>[m
[32m+[m[32m        {% if app.environment == 'dev' %}[m
[32m+[m[32m            <div class="block-configure">[m
[32m+[m[32m                <div class="illustration">[m
[32m+[m[32m                    <img src="{{ asset('bundles/acmedemo/images/welcome-configure.gif') }}" alt="Configure your application" />[m
[32m+[m[32m                </div>[m
[32m+[m[32m                <a class="symfony-button-green" href="{{ path('_configurator_home') }}">Configure</a>[m
[32m+[m[32m            </div>[m
[32m+[m[32m        {% endif %}[m
[32m+[m[32m        <div class="block-demo">[m
[32m+[m[32m            <div class="illustration">[m
[32m+[m[32m                <img src="{{ asset('bundles/acmedemo/images/welcome-demo.gif') }}" alt="Demo" />[m
[32m+[m[32m            </div>[m
[32m+[m[32m            <a class="symfony-button-green" href="{{ path('_demo') }}">Run The Demo</a>[m
[32m+[m[32m        </div>[m
[32m+[m[32m    </div>[m
[32m+[m
[32m+[m[32m    <div class="symfony-blocks-help">[m
[32m+[m[32m        <div class="block-documentation">[m
[32m+[m[32m            <ul>[m
[32m+[m[32m                <li><strong>Documentation</strong></li>[m
[32m+[m[32m                <li><a href="http://symfony.com/doc/2.0/book/index.html">The book</a></li>[m
[32m+[m[32m                <li><a href="http://symfony.com/doc/2.0/reference/index.html">The cookbook</a></li>[m
[32m+[m[32m                <li><a href="http://symfony.com/doc/2.0/glossary/index.html">Glossary</a></li>[m
[32m+[m[32m            </ul>[m
[32m+[m[32m        </div>[m
[32m+[m[32m        <div class="block-documentation-more">[m
[32m+[m[32m            <ul>[m
[32m+[m[32m                <li>&nbsp;</li>[m
[32m+[m[32m                <li><a href="http://symfony.com/doc/2.0/contributing/index.html">Contributing</a></li>[m
[32m+[m[32m                <li><a href="http://trainings.sensiolabs.com">Trainings</a></li>[m
[32m+[m[32m                <li><a href="http://books.sensiolabs.com">Books</a></li>[m
[32m+[m[32m            </ul>[m
[32m+[m[32m        </div>[m
[32m+[m[32m        <div class="block-community">[m
[32m+[m[32m            <ul>[m
[32m+[m[32m                <li><strong>Community</strong></li>[m
[32m+[m[32m                <li><a href="http://symfony.com/irc">IRC channel</a>[m
[32m+[m[32m                <li><a href="http://symfony.com/mailing-lists">Mailing lists</a></li>[m
[32m+[m[32m                <li><a href="http://forum.symfony-project.org">Forum</a></li>[m
[32m+[m[32m                <li><a href="http://symfony.com/doc/2.0/contributing/index.html">How to be involved</a></li>[m
[32m+[m[32m                <li><a href="http://symfony.com/doc/2.0/contributing/index.html">Contributing</a></li>[m
[32m+[m[32m            </ul>[m
[32m+[m[32m        </div>[m
[32m+[m[32m    </div>[m
[32m+[m[32m{% endblock %}[m
[1mdiff --git a/src/Acme/DemoBundle/Resources/views/layout.html.twig b/src/Acme/DemoBundle/Resources/views/layout.html.twig[m
[1mnew file mode 100644[m
[1mindex 0000000..e367ab8[m
[1m--- /dev/null[m
[1m+++ b/src/Acme/DemoBundle/Resources/views/layout.html.twig[m
[36m@@ -0,0 +1,49 @@[m
[32m+[m[32m<!DOCTYPE html>[m
[32m+[m[32m<html>[m
[32m+[m[32m    <head>[m
[32m+[m[32m        <meta http-equiv="Content-Type" content="text/html; charset=utf-8" />[m
[32m+[m[32m        <link rel="stylesheet" href="{{ asset('bundles/acmedemo/css/demo.css') }}" type="text/css" media="all" />[m
[32m+[m[32m        <title>{% block title %}Demo Bundle{% endblock %}</title>[m
[32m+[m[32m        <link rel="shortcut icon" href="{{ asset('favicon.ico') }}" />[m
[32m+[m[32m    </head>[m
[32m+[m[32m    <body>[m
[32m+[m[32m        <div id="symfony-wrapper">[m
[32m+[m[32m            <div id="symfony-header">[m
[32m+[m[32m                <a href="{{ path('_welcome') }}">[m
[32m+[m[32m                    <img src="{{ asset('bundles/acmedemo/images/logo.gif') }}" alt="Symfony">[m
[32m+[m[32m                </a>[m
[32m+[m[32m                <form id="symfony-search" method="GET" action="http://symfony.com/search">[m
[32m+[m[32m                    <label for="symfony-search-field"><span>Search on Symfony Website</span></label>[m
[32m+[m[32m                    <input name="q" id="symfony-search-field" type="search" placeholder="Search on Symfony website" class="medium_txt">[m
[32m+[m[32m                    <input type="submit" class="symfony-button-grey" value="OK" />[m
[32m+[m[32m                </form>[m
[32m+[m[32m            </div>[m
[32m+[m
[32m+[m[32m            {% if app.session.flash('notice') %}[m
[32m+[m[32m                <div class="flash-message">[m
[32m+[m[32m                    <em>Notice</em>: {{ app.session.flash('notice') }}[m
[32m+[m[32m                </div>[m
[32m+[m[32m            {% endif %}[m
[32m+[m
[32m+[m[32m            {% block content_header %}[m
[32m+[m[32m                <ul id="menu">[m
[32m+[m[32m                    {% block content_header_more %}[m
[32m+[m[32m                        <li><a href="{{ path('_demo') }}">Demo Home</a></li>[m
[32m+[m[32m                    {% endblock %}[m
[32m+[m[32m                </ul>[m
[32m+[m
[32m+[m[32m                <div style="clear: both"></div>[m
[32m+[m[32m            {% endblock %}[m
[32m+[m
[32m+[m[32m            <div class="symfony-content">[m
[32m+[m[32m                {% block content %}[m
[32m+[m[32m                {% endblock %}[m
[32m+[m[32m            </div>[m
[32m+[m
[32m+[m[32m            {% if code is defined %}[m
[32m+[m[32m                <h2>Code behind this page</h2>[m
[32m+[m[32m                <div class="symfony-content">{{ code|raw }}</div>[m
[32m+[m[32m            {% endif %}[m
[32m+[m[32m        </div>[m
[32m+[m[32m    </body>[m
[32m+[m[32m</html>[m
[1mdiff --git a/src/Acme/DemoBundle/Tests/Controller/DemoControllerTest.php b/src/Acme/DemoBundle/Tests/Controller/DemoControllerTest.php[m
[1mnew file mode 100644[m
[1mindex 0000000..2941af9[m
[1m--- /dev/null[m
[1m+++ b/src/Acme/DemoBundle/Tests/Controller/DemoControllerTest.php[m
[36m@@ -0,0 +1,17 @@[m
[32m+[m[32m<?php[m
[32m+[m
[32m+[m[32mnamespace Acme\DemoBundle\Tests\Controller;[m
[32m+[m
[32m+[m[32muse Symfony\Bundle\FrameworkBundle\Test\WebTestCase;[m
[32m+[m
[32m+[m[32mclass DemoControllerTest extends WebTestCase[m
[32m+[m[32m{[m
[32m+[m[32m    public function testIndex()[m
[32m+[m[32m    {[m
[32m+[m[32m        $client = static::createClient();[m
[32m+[m
[32m+[m[32m        $crawler = $client->request('GET', '/demo/hello/Fabien');[m
[32m+[m
[32m+[m[32m        $this->assertTrue($crawler->filter('html:contains("Hello Fabien")')->count() > 0);[m
[32m+[m[32m    }[m
[32m+[m[32m}[m
[1mdiff --git a/src/Acme/DemoBundle/Twig/Extension/DemoExtension.php b/src/Acme/DemoBundle/Twig/Extension/DemoExtension.php[m
[1mnew file mode 100644[m
[1mindex 0000000..29fee31[m
[1m--- /dev/null[m
[1m+++ b/src/Acme/DemoBundle/Twig/Extension/DemoExtension.php[m
[36m@@ -0,0 +1,74 @@[m
[32m+[m[32m<?php[m
[32m+[m
[32m+[m[32mnamespace Acme\DemoBundle\Twig\Extension;[m
[32m+[m
[32m+[m[32muse Symfony\Component\HttpKernel\KernelInterface;[m
[32m+[m[32muse Symfony\Bundle\TwigBundle\Loader\FilesystemLoader;[m
[32m+[m
[32m+[m[32mclass DemoExtension extends \Twig_Extension[m
[32m+[m[32m{[m
[32m+[m[32m    protected $loader;[m
[32m+[m[32m    protected $controller;[m
[32m+[m
[32m+[m[32m    public function __construct(FilesystemLoader $loader)[m
[32m+[m[32m    {[m
[32m+[m[32m        $this->loader = $loader;[m
[32m+[m[32m    }[m
[32m+[m
[32m+[m[32m    public function setController($controller)[m
[32m+[m[32m    {[m
[32m+[m[32m        $this->controller = $controller;[m
[32m+[m[32m    }[m
[32m+[m
[32m+[m[32m    /**[m
[32m+[m[32m     * {@inheritdoc}[m
[32m+[m[32m     */[m
[32m+[m[32m    public function getFunctions()[m
[32m+[m[32m    {[m
[32m+[m[32m        return array([m
[32m+[m[32m            'code' => new \Twig_Function_Method($this, 'getCode', array('is_safe' => array('html'))),[m
[32m+[m[32m        );[m
[32m+[m[32m    }[m
[32m+[m
[32m+[m[32m    public function getCode($template)[m
[32m+[m[32m    {[m
[32m+[m[32m        $controller = htmlspecialchars($this->getControllerCode(), ENT_QUOTES, 'UTF-8');[m
[32m+[m[32m        $template = htmlspecialchars($this->getTemplateCode($template), ENT_QUOTES, 'UTF-8');[m
[32m+[m
[32m+[m[32m        // remove the code block[m
[32m+[m[32m        $template = str_replace('{% set code = code(_self) %}', '', $template);[m
[32m+[m
[32m+[m[32m        return <<<EOF[m
[32m+[m[32m<p><strong>Controller Code</strong></p>[m
[32m+[m[32m<pre>$controller</pre>[m
[32m+[m
[32m+[m[32m<p><strong>Template Code</strong></p>[m
[32m+[m[32m<pre>$template</pre>[m
[32m+[m[32mEOF;[m
[32m+[m[32m    }[m
[32m+[m
[32m+[m[32m    protected function getControllerCode()[m
[32m+[m[32m    {[m
[32m+[m[32m        $r = new \ReflectionClass($this->controller[0]);[m
[32m+[m[32m        $m = $r->getMethod($this->controller[1]);[m
[32m+[m
[32m+[m[32m        $code = file($r->getFilename());[m
[32m+[m
[32m+[m[32m        return '    '.$m->getDocComment()."\n".implode('', array_slice($code, $m->getStartline() - 1, $m->getEndLine() - $m->getStartline() + 1));[m
[32m+[m[32m    }[m
[32m+[m
[32m+[m[32m    protected function getTemplateCode($template)[m
[32m+[m[32m    {[m
[32m+[m[32m        return $this->loader->getSource($template->getTemplateName());[m
[32m+[m[32m    }[m
[32m+[m
[32m+[m[32m    /**[m
[32m+[m[32m     * Returns the name of the extension.[m
[32m+[m[32m     *[m
[32m+[m[32m     * @return string The extension name[m
[32m+[m[32m     */[m
[32m+[m[32m    public function getName()[m
[32m+[m[32m    {[m
[32m+[m[32m        return 'demo';[m
[32m+[m[32m    }[m
[32m+[m[32m}[m
[1mdiff --git a/vendor/assetic b/vendor/assetic[m
[1mnew file mode 160000[m
[1mindex 0000000..4aeef88[m
[1m--- /dev/null[m
[1m+++ b/vendor/assetic[m
[36m@@ -0,0 +1 @@[m
[32m+[m[32mSubproject commit 4aeef88b7908510d0bcbbde357f0adf470534ed8[m
[1mdiff --git a/vendor/bundles/JMS/SecurityExtraBundle b/vendor/bundles/JMS/SecurityExtraBundle[m
[1mnew file mode 160000[m
[1mindex 0000000..e752f88[m
[1m--- /dev/null[m
[1m+++ b/vendor/bundles/JMS/SecurityExtraBundle[m
[36m@@ -0,0 +1 @@[m
[32m+[m[32mSubproject commit e752f888c51425f71382c056961f10f2be642102[m
[1mdiff --git a/vendor/bundles/Sensio/Bundle/DistributionBundle b/vendor/bundles/Sensio/Bundle/DistributionBundle[m
[1mnew file mode 160000[m
[1mindex 0000000..41a6c5c[m
[1m--- /dev/null[m
[1m+++ b/vendor/bundles/Sensio/Bundle/DistributionBundle[m
[36m@@ -0,0 +1 @@[m
[32m+[m[32mSubproject commit 41a6c5caed65f02bb09c95a90579f047616471fd[m
[1mdiff --git a/vendor/bundles/Sensio/Bundle/FrameworkExtraBundle b/vendor/bundles/Sensio/Bundle/FrameworkExtraBundle[m
[1mnew file mode 160000[m
[1mindex 0000000..3dcf2d3[m
[1m--- /dev/null[m
[1m+++ b/vendor/bundles/Sensio/Bundle/FrameworkExtraBundle[m
[36m@@ -0,0 +1 @@[m
[32m+[m[32mSubproject commit 3dcf2d31ad898db2a5ab418cb03b9f701ba2350f[m
[1mdiff --git a/vendor/bundles/Sensio/Bundle/GeneratorBundle b/vendor/bundles/Sensio/Bundle/GeneratorBundle[m
[1mnew file mode 160000[m
[1mindex 0000000..c0118ce[m
[1m--- /dev/null[m
[1m+++ b/vendor/bundles/Sensio/Bundle/GeneratorBundle[m
[36m@@ -0,0 +1 @@[m
[32m+[m[32mSubproject commit c0118ce370f8da20e43051f2dd1ae331a202ab9c[m
[1mdiff --git a/vendor/bundles/Symfony/Bundle/AsseticBundle b/vendor/bundles/Symfony/Bundle/AsseticBundle[m
[1mnew file mode 160000[m
[1mindex 0000000..fbcbaf4[m
[1m--- /dev/null[m
[1m+++ b/vendor/bundles/Symfony/Bundle/AsseticBundle[m
[36m@@ -0,0 +1 @@[m
[32m+[m[32mSubproject commit fbcbaf46df2aa143759319de205e1babcf7dd87d[m
[1mdiff --git a/vendor/doctrine b/vendor/doctrine[m
[1mnew file mode 160000[m
[1mindex 0000000..03d2b0f[m
[1m--- /dev/null[m
[1m+++ b/vendor/doctrine[m
[36m@@ -0,0 +1 @@[m
[32m+[m[32mSubproject commit 03d2b0f30c35d313339478d24337dd1a28a2f2f2[m
[1mdiff --git a/vendor/doctrine-common b/vendor/doctrine-common[m
[1mnew file mode 160000[m
[1mindex 0000000..b886898[m
[1m--- /dev/null[m
[1m+++ b/vendor/doctrine-common[m
[36m@@ -0,0 +1 @@[m
[32m+[m[32mSubproject commit b886898821288d305862ee9c567cc5b5cbb4c0dc[m
[1mdiff --git a/vendor/doctrine-dbal b/vendor/doctrine-dbal[m
[1mnew file mode 160000[m
[1mindex 0000000..6465038[m
[1m--- /dev/null[m
[1m+++ b/vendor/doctrine-dbal[m
[36m@@ -0,0 +1 @@[m
[32m+[m[32mSubproject commit 64650385987dee6be046b8fa2485ff4d7663f814[m
[1mdiff --git a/vendor/metadata b/vendor/metadata[m
[1mnew file mode 160000[m
[1mindex 0000000..8717ad2[m
[1m--- /dev/null[m
[1m+++ b/vendor/metadata[m
[36m@@ -0,0 +1 @@[m
[32m+[m[32mSubproject commit 8717ad2a5689480765d9ffafe925cd8a2457e582[m
[1mdiff --git a/vendor/monolog b/vendor/monolog[m
[1mnew file mode 160000[m
[1mindex 0000000..b704c49[m
[1m--- /dev/null[m
[1m+++ b/vendor/monolog[m
[36m@@ -0,0 +1 @@[m
[32m+[m[32mSubproject commit b704c49a3051536f67f2d39f13568f74615b9922[m
[1mdiff --git a/vendor/swiftmailer b/vendor/swiftmailer[m
[1mnew file mode 160000[m
[1mindex 0000000..7ce4188[m
[1m--- /dev/null[m
[1m+++ b/vendor/swiftmailer[m
[36m@@ -0,0 +1 @@[m
[32m+[m[32mSubproject commit 7ce4188c9ba823707d5a1e8798eba1c2cce01567[m
[1mdiff --git a/vendor/symfony b/vendor/symfony[m
[1mnew file mode 160000[m
[1mindex 0000000..11ae9c9[m
[1m--- /dev/null[m
[1m+++ b/vendor/symfony[m
[36m@@ -0,0 +1 @@[m
[32m+[m[32mSubproject commit 11ae9c97409fb349e2bfa50ed65bd23ec6dbca70[m
[1mdiff --git a/vendor/twig b/vendor/twig[m
[1mnew file mode 160000[m
[1mindex 0000000..2afc513[m
[1m--- /dev/null[m
[1m+++ b/vendor/twig[m
[36m@@ -0,0 +1 @@[m
[32m+[m[32mSubproject commit 2afc513620e7f8dadda92a0f4ed04cb157e048df[m
[1mdiff --git a/vendor/twig-extensions b/vendor/twig-extensions[m
[1mnew file mode 160000[m
[1mindex 0000000..feb6d3f[m
[1m--- /dev/null[m
[1m+++ b/vendor/twig-extensions[m
[36m@@ -0,0 +1 @@[m
[32m+[m[32mSubproject commit feb6d3f10c411e2631997c0a905aa581c80305c1[m
[1mdiff --git a/web/.htaccess b/web/.htaccess[m
[1mnew file mode 100644[m
[1mindex 0000000..0355c20[m
[1m--- /dev/null[m
[1m+++ b/web/.htaccess[m
[36m@@ -0,0 +1,5 @@[m
[32m+[m[32m<IfModule mod_rewrite.c>[m
[32m+[m[32m    RewriteEngine On[m
[32m+[m[32m    RewriteCond %{REQUEST_FILENAME} !-f[m
[32m+[m[32m    RewriteRule ^(.*)$ app.php [QSA,L][m
[32m+[m[32m</IfModule>[m
[1mdiff --git a/web/app.php b/web/app.php[m
[1mnew file mode 100644[m
[1mindex 0000000..5a9e02d[m
[1m--- /dev/null[m
[1m+++ b/web/app.php[m
[36m@@ -0,0 +1,12 @@[m
[32m+[m[32m<?php[m
[32m+[m
[32m+[m[32mrequire_once __DIR__.'/../app/bootstrap.php.cache';[m
[32m+[m[32mrequire_once __DIR__.'/../app/AppKernel.php';[m
[32m+[m[32m//require_once __DIR__.'/../app/AppCache.php';[m
[32m+[m
[32m+[m[32muse Symfony\Component\HttpFoundation\Request;[m
[32m+[m
[32m+[m[32m$kernel = new AppKernel('prod', false);[m
[32m+[m[32m$kernel->loadClassCache();[m
[32m+[m[32m//$kernel = new AppCache($kernel);[m
[32m+[m[32m$kernel->handle(Request::createFromGlobals())->send();[m
[1mdiff --git a/web/app_dev.php b/web/app_dev.php[m
[1mnew file mode 100644[m
[1mindex 0000000..48b9afd[m
[1m--- /dev/null[m
[1m+++ b/web/app_dev.php[m
[36m@@ -0,0 +1,27 @@[m
[32m+[m[32m<?php[m
[32m+[m
[32m+[m[32m// if you don't want to setup permissions the proper way, just uncomment the following PHP line[m
[32m+[m[32m// read http://symfony.com/doc/current/book/installation.html#configuration-and-setup for more information[m
[32m+[m[32m//umask(0000);[m
[32m+[m
[32m+[m[32m// this check prevents access to debug front controllers that are deployed by accident to production servers.[m
[32m+[m[32m// feel free to remove this, extend it, or make something more sophisticated.[m
[32m+[m[32mif (isset($_SERVER['HTTP_CLIENT_IP'])[m
[32m+[m[32m    || isset($_SERVER['HTTP_X_FORWARDED_FOR'])[m
[32m+[m[32m    || !in_array(@$_SERVER['REMOTE_ADDR'], array([m
[32m+[m[32m        '127.0.0.1',[m
[32m+[m[32m        '::1',[m
[32m+[m[32m    ))[m
[32m+[m[32m) {[m
[32m+[m[32m    header('HTTP/1.0 403 Forbidden');[m
[32m+[m[32m    exit('You are not allowed to access this file. Check '.basename(__FILE__).' for more information.');[m
[32m+[m[32m}[m
[32m+[m
[32m+[m[32mrequire_once __DIR__.'/../app/bootstrap.php.cache';[m
[32m+[m[32mrequire_once __DIR__.'/../app/AppKernel.php';[m
[32m+[m
[32m+[m[32muse Symfony\Component\HttpFoundation\Request;[m
[32m+[m
[32m+[m[32m$kernel = new AppKernel('dev', true);[m
[32m+[m[32m$kernel->loadClassCache();[m
[32m+[m[32m$kernel->handle(Request::createFromGlobals())->send();[m
[1mdiff --git a/web/apple-touch-icon.png b/web/apple-touch-icon.png[m
[1mnew file mode 100644[m
[1mindex 0000000..11f17e6[m
Binary files /dev/null and b/web/apple-touch-icon.png differ
[1mdiff --git a/web/bundles/acmedemo/css/demo.css b/web/bundles/acmedemo/css/demo.css[m
[1mnew file mode 100644[m
[1mindex 0000000..1dd242f[m
[1m--- /dev/null[m
[1m+++ b/web/bundles/acmedemo/css/demo.css[m
[36m@@ -0,0 +1,293 @@[m
[32m+[m[32m/*[m
[32m+[m[32mCopyright (c) 2010, Yahoo! Inc. All rights reserved.[m
[32m+[m[32mCode licensed under the BSD License:[m
[32m+[m[32mhttp://developer.yahoo.com/yui/license.html[m
[32m+[m[32mversion: 2.8.2r1[m
[32m+[m
[32m+[m[32mReset[m
[32m+[m[32m*/[m
[32m+[m
[32m+[m[32mhtml{color:#000;background:#FFF;}body,div,dl,dt,dd,ul,ol,li,h1,h2,h3,h4,h5,h6,pre,code,form,fieldset,legend,input,button,textarea,p,blockquote,th,td{margin:0;padding:0;}table{border-collapse:collapse;border-spacing:0;}fieldset,img{border:0;}address,caption,cite,code,dfn,em,strong,th,var,optgroup{font-style:inherit;font-weight:inherit;}del,ins{text-decoration:none;}li{list-style:none;}caption,th{text-align:left;}h1,h2,h3,h4,h5,h6{font-size:100%;font-weight:normal;}q:before,q:after{content:'';}abbr,acronym{border:0;font-variant:normal;}sup{vertical-align:baseline;}sub{vertical-align:baseline;}legend{color:#000;}input,button,textarea,select,optgroup,option{font-family:inherit;font-size:inherit;font-style:inherit;font-weight:inherit;}input,button,textarea,select{*font-size:100%;}[m
[32m+[m
[32m+[m[32mhtml, body[m
[32m+[m[32m{[m
[32m+[m[32m    background-color: #EFEFEF;[m
[32m+[m[32m}[m
[32m+[m
[32m+[m[32mbody[m
[32m+[m[32m{[m
[32m+[m[32m    font-size:        14px;[m
[32m+[m[32m    font-family:      "Lucida Sans Unicode", "Lucida Grande", Verdana, Arial, Helvetica, sans-serif;[m
[32m+[m[32m    color:            #313131;[m
[32m+[m[32m}[m
[32m+[m
[32m+[m[32ma[m
[32m+[m[32m{[m
[32m+[m[32m    color:           #08C;[m
[32m+[m[32m    text-decoration: none;[m
[32m+[m[32m}[m
[32m+[m
[32m+[m[32ma:hover[m
[32m+[m[32m{[m
[32m+[m[32m    text-decoration: underline;[m
[32m+[m[32m}[m
[32m+[m
[32m+[m[32mstrong[m
[32m+[m[32m{[m
[32m+[m[32m    font-weight: bold;[m
[32m+[m[32m}[m
[32m+[m
[32m+[m[32mem[m
[32m+[m[32m{[m
[32m+[m[32m    font-style: italic;[m
[32m+[m[32m}[m
[32m+[m
[32m+[m[32mh1, h2, h3[m
[32m+[m[32m{[m
[32m+[m[32m    font-family:    Georgia, "Times New Roman", Times, serif;[m
[32m+[m[32m    color:          #404040;[m
[32m+[m[32m}[m
[32m+[m
[32m+[m[32mh1[m
[32m+[m[32m{[m
[32m+[m[32m    font-size:      45px;[m
[32m+[m[32m    padding-bottom: 30px;[m
[32m+[m[32m}[m
[32m+[m
[32m+[m[32mh2[m
[32m+[m[32m{[m
[32m+[m[32m    font-weight:   bold;[m
[32m+[m[32m    color:         #FFFFFF;[m
[32m+[m[32m    /* Font is duplicated of body (sans-serif) */[m
[32m+[m[32m    font-family:      "Lucida Sans Unicode", "Lucida Grande", Verdana, Arial, Helvetica, sans-serif;[m
[32m+[m
[32m+[m[32m    margin-bottom:    10px;[m
[32m+[m[32m    background-color: #aacd4e;[m
[32m+[m[32m    padding:          2px 4px;[m
[32m+[m[32m    display:          inline-block;[m
[32m+[m[32m    text-transform:   uppercase;[m
[32m+[m
[32m+[m[32m}[m
[32m+[m
[32m+[m[32mp[m
[32m+[m[32m{[m
[32m+[m[32m    line-height:    20px;[m
[32m+[m[32m    padding-bottom: 20px;[m
[32m+[m[32m}[m
[32m+[m
[32m+[m[32mul#demo-list a[m
[32m+[m[32m{[m
[32m+[m[32m    background: url(../images/blue-arrow.png) no-repeat right 6px;[m
[32m+[m[32m    padding-right: 10px;[m
[32m+[m[32m}[m
[32m+[m
[32m+[m[32mul, ol[m
[32m+[m[32m{[m
[32m+[m[32m    padding-left: 20px;[m
[32m+[m[32m}[m
[32m+[m
[32m+[m[32mli[m
[32m+[m[32m{[m
[32m+[m[32m    padding-bottom: 18px;[m
[32m+[m[32m}[m
[32m+[m
[32m+[m[32mol li[m
[32m+[m[32m{[m
[32m+[m[32m    list-style-type: decimal;[m
[32m+[m[32m}[m
[32m+[m
[32m+[m[32mul li[m
[32m+[m[32m{[m
[32m+[m[32m    list-style-type: none;[m
[32m+[m[32m}[m
[32m+[m
[32m+[m[32m#symfony-header[m
[32m+[m[32m{[m
[32m+[m[32m    position: relative;[m
[32m+[m[32m    padding: 30px 30px 20px 30px;[m
[32m+[m[32m}[m
[32m+[m
[32m+[m[32m#symfony-wrapper[m
[32m+[m[32m{[m
[32m+[m[32m    width:  970px;[m
[32m+[m[32m    margin: 0 auto;[m
[32m+[m[32m}[m
[32m+[m
[32m+[m[32m.symfony-content[m
[32m+[m[32m{[m
[32m+[m[32m    background-color:           white;[m
[32m+[m[32m    border:                     1px solid #DFDFDF;[m
[32m+[m[32m    padding:                    50px;[m
[32m+[m[32m    -moz-border-radius:         16px;[m
[32m+[m[32m    -webkit-border-radius:      16px;[m
[32m+[m[32m    border-radius:              16px;[m
[32m+[m[32m    margin-bottom:              20px;[m
[32m+[m[32m    word-wrap:                  break-word;[m
[32m+[m[32m}[m
[32m+[m
[32m+[m[32m#symfony-search[m
[32m+[m[32m{[m
[32m+[m[32m    position: absolute;[m
[32m+[m[32m    top:   50px;[m
[32m+[m[32m    right: 30px;[m
[32m+[m[32m}[m
[32m+[m
[32m+[m[32m#symfony-search input[type="search"][m
[32m+[m[32m{[m
[32m+[m[32m    -webkit-appearance: textfield;[m
[32m+[m[32m}[m
[32m+[m
[32m+[m[32m#symfony-search-field[m
[32m+[m[32m{[m
[32m+[m[32m    width: 190px;[m
[32m+[m[32m}[m
[32m+[m
[32m+[m[32m#symfony-search label[m
[32m+[m[32m{[m
[32m+[m[32m    display: block;[m
[32m+[m[32m    float: left;[m
[32m+[m[32m    width: 20px;[m
[32m+[m[32m    height: 25px;[m
[32m+[m[32m    background: url(../images/search.png) no-repeat left 5px;[m
[32m+[m[32m}[m
[32m+[m
[32m+[m[32m#symfony-search label span[m
[32m+[m[32m{[m
[32m+[m[32m    display: none;[m
[32m+[m[32m}[m
[32m+[m
[32m+[m[32minput[type=text], input[type=password][m
[32m+[m[32m{[m
[32m+[m[32m    border:      1px solid #DADADA;[m
[32m+[m[32m    background:  white url(../images/field-background.gif) repeat-x left top;[m
[32m+[m[32m    padding:     5px 6px;[m
[32m+[m[32m    color:       #565656;[m
[32m+[m[32m    font-family: 'Lucida Sans Unicode', 'Lucida Grande', Verdana, Arial, Helvetica, sans-serif;[m
[32m+[m[32m    font-size:   12px;[m
[32m+[m[32m}[m
[32m+[m
[32m+[m[32m.symfony-button-grey,[m
[32m+[m[32m.symfony-button-green[m
[32m+[m[32m{[m
[32m+[m[32m    font-size: 0.85em;[m
[32m+[m[32m    font-weight: bold;[m
[32m+[m
[32m+[m[32m    cursor: pointer;[m
[32m+[m
[32m+[m[32m    display: inline-block;[m
[32m+[m[32m    outline: none;[m
[32m+[m
[32m+[m[32m    text-align:     center;[m
[32m+[m[32m    text-transform: uppercase;[m
[32m+[m
[32m+[m[32m    padding: 3px 10px;[m
[32m+[m
[32m+[m[32m    text-shadow: 0 1px 1px rgba(0,0,0,.3);[m
[32m+[m
[32m+[m[32m    -webkit-border-radius: 4px;[m
[32m+[m[32m    -moz-border-radius:    4px;[m
[32m+[m[32m    border-radius:         4px;[m
[32m+[m[32m}[m
[32m+[m
[32m+[m[32m.symfony-button-grey[m
[32m+[m[32m{[m
[32m+[m[32m    color:       #868686;[m
[32m+[m[32m    font-weight: normal;[m
[32m+[m
[32m+[m[32m    padding:    5px 10px;[m
[32m+[m[32m    border:     solid 1px #d7d7d7;[m
[32m+[m[32m    background: #ffffff;[m
[32m+[m[32m    background: -webkit-gradient(linear, left top, left bottom, from(#ffffff), to(#d7d7d7));[m
[32m+[m[32m    background: -moz-linear-gradient(top,  #ffffff,  #d7d7d7);[m
[32m+[m[32m    filter:  progid:DXImageTransform.Microsoft.gradient(startColorstr='#ffffff', endColorstr='#d7d7d7');[m
[32m+[m[32m}[m
[32m+[m
[32m+[m[32m.symfony-button-green[m
[32m+[m[32m{[m
[32m+[m[32m    padding: 5px 12px;[m
[32m+[m
[32m+[m[32m    color: white;[m
[32m+[m
[32m+[m[32m    border:     solid 1px #a7da39;[m
[32m+[m[32m    background: #a7da39;[m
[32m+[m[32m    background: -webkit-gradient(linear, left top, left bottom, from(#a7da39), to(#6a9211));[m
[32m+[m[32m    background: -moz-linear-gradient(top,  #a7da39,  #6a9211);[m
[32m+[m[32m    filter:  progid:DXImageTransform.Microsoft.gradient(startColorstr='#a7da39', endColorstr='#6a9211');[m
[32m+[m[32m}[m
[32m+[m
[32m+[m[32m.symfony-blocks-welcome[m
[32m+[m[32m{[m
[32m+[m[32m    overflow: hidden;[m
[32m+[m[32m}[m
[32m+[m
[32m+[m[32m.symfony-blocks-welcome > div[m
[32m+[m[32m{[m
[32m+[m[32m    background-color: whitesmoke;[m
[32m+[m[32m    float:            left;[m
[32m+[m[32m    width:            240px;[m
[32m+[m[32m    margin-right:     14px;[m
[32m+[m[32m    text-align:       center;[m
[32m+[m[32m    padding:          26px 20px;[m
[32m+[m[32m}[m
[32m+[m
[32m+[m[32m.symfony-blocks-welcome > div.block-demo[m
[32m+[m[32m{[m
[32m+[m[32m    margin-right: 0;[m
[32m+[m[32m}[m
[32m+[m
[32m+[m[32m.symfony-blocks-welcome .illustration[m
[32m+[m[32m{[m
[32m+[m[32m    padding-bottom: 20px;[m
[32m+[m[32m}[m
[32m+[m
[32m+[m[32m.symfony-blocks-help[m
[32m+[m[32m{[m
[32m+[m[32m    overflow: hidden;[m
[32m+[m[32m}[m
[32m+[m
[32m+[m[32m.symfony-blocks-help[m
[32m+[m[32m{[m
[32m+[m[32m    margin-top: 30px;[m
[32m+[m[32m    padding:    18px;[m
[32m+[m[32m    border:     1px solid #E6E6E6;[m
[32m+[m[32m}[m
[32m+[m
[32m+[m[32m.symfony-blocks-help > div[m
[32m+[m[32m{[m
[32m+[m[32m    width:        254px;[m
[32m+[m[32m    float:        left;[m
[32m+[m[32m}[m
[32m+[m
[32m+[m[32m.flash-message[m
[32m+[m[32m{[m
[32m+[m[32m    padding: 10px;[m
[32m+[m[32m    margin: 5px;[m
[32m+[m[32m    margin-top: 15px;[m
[32m+[m[32m    background-color: #ffe;[m
[32m+[m[32m}[m
[32m+[m
[32m+[m[32m.error[m
[32m+[m[32m{[m
[32m+[m[32m    color: red;[m
[32m+[m[32m}[m
[32m+[m
[32m+[m[32m#login label, #contact_form label[m
[32m+[m[32m{[m
[32m+[m[32m    display: block;[m
[32m+[m[32m    float: left;[m
[32m+[m[32m    width: 90px;[m
[32m+[m[32m}[m
[32m+[m
[32m+[m[32mul#menu[m
[32m+[m[32m{[m
[32m+[m[32m    float: right;[m
[32m+[m[32m    margin-bottom: 20px;[m
[32m+[m[32m    padding-left: 0;[m
[32m+[m[32m}[m
[32m+[m
[32m+[m[32m#menu li[m
[32m+[m[32m{[m
[32m+[m[32m    padding-left: 0;[m
[32m+[m[32m    margin-right: 10px;[m
[32m+[m[32m    display: inline;[m
[32m+[m[32m}[m
[1mdiff --git a/web/bundles/acmedemo/images/blue-arrow.png b/web/bundles/acmedemo/images/blue-arrow.png[m
[1mnew file mode 100644[m
[1mindex 0000000..fa82d4b[m
Binary files /dev/null and b/web/bundles/acmedemo/images/blue-arrow.png differ
[1mdiff --git a/web/bundles/acmedemo/images/field-background.gif b/web/bundles/acmedemo/images/field-background.gif[m
[1mnew file mode 100644[m
[1mindex 0000000..7c0efc1[m
Binary files /dev/null and b/web/bundles/acmedemo/images/field-background.gif differ
[1mdiff --git a/web/bundles/acmedemo/images/logo.gif b/web/bundles/acmedemo/images/logo.gif[m
[1mnew file mode 100644[m
[1mindex 0000000..703cf45[m
Binary files /dev/null and b/web/bundles/acmedemo/images/logo.gif differ
[1mdiff --git a/web/bundles/acmedemo/images/search.png b/web/bundles/acmedemo/images/search.png[m
[1mnew file mode 100644[m
[1mindex 0000000..3c88b6a[m
Binary files /dev/null and b/web/bundles/acmedemo/images/search.png differ
[1mdiff --git a/web/bundles/acmedemo/images/welcome-configure.gif b/web/bundles/acmedemo/images/welcome-configure.gif[m
[1mnew file mode 100644[m
[1mindex 0000000..931179a[m
Binary files /dev/null and b/web/bundles/acmedemo/images/welcome-configure.gif differ
[1mdiff --git a/web/bundles/acmedemo/images/welcome-demo.gif b/web/bundles/acmedemo/images/welcome-demo.gif[m
[1mnew file mode 100644[m
[1mindex 0000000..0623de5[m
Binary files /dev/null and b/web/bundles/acmedemo/images/welcome-demo.gif differ
[1mdiff --git a/web/bundles/acmedemo/images/welcome-quick-tour.gif b/web/bundles/acmedemo/images/welcome-quick-tour.gif[m
[1mnew file mode 100644[m
[1mindex 0000000..b9018b1[m
Binary files /dev/null and b/web/bundles/acmedemo/images/welcome-quick-tour.gif differ
[1mdiff --git a/web/bundles/framework/css/exception.css b/web/bundles/framework/css/exception.css[m
[1mnew file mode 100644[m
[1mindex 0000000..0d31027[m
[1m--- /dev/null[m
[1m+++ b/web/bundles/framework/css/exception.css[m
[36m@@ -0,0 +1,226 @@[m
[32m+[m[32m/*[m
[32m+[m[32mCopyright (c) 2010, Yahoo! Inc. All rights reserved.[m
[32m+[m[32mCode licensed under the BSD License:[m
[32m+[m[32mhttp://developer.yahoo.com/yui/license.html[m
[32m+[m[32mversion: 3.1.2[m
[32m+[m[32mbuild: 56[m
[32m+[m[32m*/[m
[32m+[m[32m.sf-exceptionreset html{color:#000;background:#FFF;}.sf-exceptionreset body,.sf-exceptionreset div,.sf-exceptionreset dl,.sf-exceptionreset dt,.sf-exceptionreset dd,.sf-exceptionreset ul,.sf-exceptionreset ol,.sf-exceptionreset li,.sf-exceptionreset h1,.sf-exceptionreset h2,.sf-exceptionreset h3,.sf-exceptionreset h4,.sf-exceptionreset h5,.sf-exceptionreset h6,.sf-exceptionreset pre,.sf-exceptionreset code,.sf-exceptionreset form,.sf-exceptionreset fieldset,.sf-exceptionreset legend,.sf-exceptionreset input,.sf-exceptionreset textarea,.sf-exceptionreset p,.sf-exceptionreset blockquote,.sf-exceptionreset th,.sf-exceptionreset td{margin:0;padding:0;}.sf-exceptionreset table{border-collapse:collapse;border-spacing:0;}.sf-exceptionreset fieldset,.sf-exceptionreset img{border:0;}.sf-exceptionreset address,.sf-exceptionreset caption,.sf-exceptionreset cite,.sf-exceptionreset code,.sf-exceptionreset dfn,.sf-exceptionreset em,.sf-exceptionreset strong,.sf-exceptionreset th,.sf-exceptionreset var{font-style:normal;font-weight:normal;}.sf-exceptionreset li{list-style:none;}.sf-exceptionreset caption,.sf-exceptionreset th{text-align:left;}.sf-exceptionreset h1,.sf-exceptionreset h2,.sf-exceptionreset h3,.sf-exceptionreset h4,.sf-exceptionreset h5,.sf-exceptionreset h6{font-size:100%;font-weight:normal;}.sf-exceptionreset q:before,.sf-exceptionreset q:after{content:'';}.sf-exceptionreset abbr,.sf-exceptionreset acronym{border:0;font-variant:normal;}.sf-exceptionreset sup{vertical-align:text-top;}.sf-exceptionreset sub{vertical-align:text-bottom;}.sf-exceptionreset input,.sf-exceptionreset textarea,.sf-exceptionreset select{font-family:inherit;font-size:inherit;font-weight:inherit;}.sf-exceptionreset input,.sf-exceptionreset textarea,.sf-exceptionreset select{*font-size:100%;}.sf-exceptionreset legend{color:#000;}[m
[32m+[m
[32m+[m[32m.sf-exceptionreset html,[m
[32m+[m[32m.sf-exceptionreset body {[m
[32m+[m[32m    width: 100%;[m
[32m+[m[32m    min-height: 100%;[m
[32m+[m[32m    _height: 100%;[m
[32m+[m[32m    margin: 0;[m
[32m+[m[32m    padding: 0;[m
[32m+[m[32m}[m
[32m+[m[32m.sf-exceptionreset body {[m
[32m+[m[32m    font: 1em "Lucida Sans Unicode", "Lucida Grande", Verdana, Arial, Helvetica, sans-serif;[m
[32m+[m[32m    text-align: left;[m
[32m+[m[32m    background-color: #efefef;[m
[32m+[m[32m}[m
[32m+[m
[32m+[m[32m.sf-exceptionreset abbr {[m
[32m+[m[32m    border-bottom: 1px dotted #000;[m
[32m+[m[32m    cursor: help;[m
[32m+[m[32m}[m
[32m+[m
[32m+[m[32m.sf-exceptionreset p {[m
[32m+[m[32m    font-size: 14px;[m
[32m+[m[32m    line-height: 20px;[m
[32m+[m[32m    color: #868686;[m
[32m+[m[32m    padding-bottom: 20px;[m
[32m+[m[32m}[m
[32m+[m
[32m+[m[32m.sf-exceptionreset strong {[m
[32m+[m[32m    color: #313131;[m
[32m+[m[32m    font-weight: bold;[m
[32m+[m[32m}[m
[32m+[m
[32m+[m[32m.sf-exceptionreset a {[m
[32m+[m[32m    color: #6c6159;[m
[32m+[m[32m}[m
[32m+[m[32m.sf-exceptionreset a img {[m
[32m+[m[32m    border: none;[m
[32m+[m[32m}[m
[32m+[m[32m.sf-exceptionreset a:hover {[m
[32m+[m[32m    text-decoration: underline;[m
[32m+[m[32m}[m
[32m+[m
[32m+[m[32m.sf-exceptionreset em {[m
[32m+[m[32m    font-style: italic;[m
[32m+[m[32m}[m
[32m+[m
[32m+[m[32m.sf-exceptionreset h2,[m
[32m+[m[32m.sf-exceptionreset h3 {[m
[32m+[m[32m    font-weight: bold;[m
[32m+[m[32m}[m
[32m+[m[32m.sf-exceptionreset h1 {[m
[32m+[m[32m    font-family: Georgia, "Times New Roman", Times, serif;[m
[32m+[m[32m    font-size: 20px;[m
[32m+[m[32m    color: #313131;[m
[32m+[m[32m}[m
[32m+[m
[32m+[m[32m.sf-exceptionreset li {[m
[32m+[m[32m    padding-bottom: 10px;[m
[32m+[m[32m}[m
[32m+[m
[32m+[m[32m.sf-exceptionreset .traces {[m
[32m+[m[32m    padding-bottom: 14px;[m
[32m+[m[32m}[m
[32m+[m[32m.sf-exceptionreset .traces li {[m
[32m+[m[32m    font-size: 12px;[m
[32m+[m[32m    color: #868686;[m
[32m+[m[32m    padding: 5px 4px;[m
[32m+[m[32m    list-style-type: decimal;[m
[32m+[m[32m    margin-left: 20px;[m
[32m+[m[32m}[m
[32m+[m[32m.sf-exceptionreset #logs .traces li.error {[m
[32m+[m[32m    font-style: normal;[m
[32m+[m[32m    color: #AA3333;[m
[32m+[m[32m    background: #f9ecec;[m
[32m+[m[32m}[m
[32m+[m[32m/* fix for Opera not liking empty <li> */[m
[32m+[m[32m.sf-exceptionreset .traces li:after {[m
[32m+[m[32m    content: "\00A0";[m
[32m+[m[32m}[m
[32m+[m
[32m+[m[32m.sf-exceptionreset .trace {[m
[32m+[m[32m    border: 1px solid #D3D3D3;[m
[32m+[m[32m    padding: 10px;[m
[32m+[m[32m    overflow: auto;[m
[32m+[m[32m    margin: 10px 0 20px;[m
[32m+[m[32m}[m
[32m+[m
[32m+[m[32m.sf-exceptionreset .block,[m
[32m+[m[32m.sf-exceptionreset .block_exception {[m
[32m+[m[32m    -moz-border-radius: 16px;[m
[32m+[m[32m    -webkit-border-radius: 16px;[m
[32m+[m[32m    border-radius: 16px;[m
[32m+[m[32m    margin-bottom: 20px;[m
[32m+[m[32m}[m
[32m+[m[32m.sf-exceptionreset .block {[m
[32m+[m[32m    background-color: #FFFFFF;[m
[32m+[m[32m    border: 1px solid #dfdfdf;[m
[32m+[m[32m    padding: 40px 50px;[m
[32m+[m[32m}[m
[32m+[m[32m.sf-exceptionreset .block_exception {[m
[32m+[m[32m    background-color: #f6f6f6;[m
[32m+[m[32m    border: 1px solid #dfdfdf;[m
[32m+[m[32m    padding: 30px 28px;[m
[32m+[m[32m}[m
[32m+[m[32m.sf-exceptionreset .block_exception div {[m
[32m+[m[32m    color: #313131;[m
[32m+[m[32m    font-size: 10px;[m
[32m+[m[32m}[m
[32m+[m
[32m+[m[32m.sf-exceptionreset .block_exception_detected .illustration_exception,[m
[32m+[m[32m.sf-exceptionreset .block_exception_detected .text_exception {[m
[32m+[m[32m    float: left;[m
[32m+[m[32m}[m
[32m+[m[32m.sf-exceptionreset .block_exception_detected .illustration_exception {[m
[32m+[m[32m    width: 152px;[m
[32m+[m[32m}[m
[32m+[m[32m.sf-exceptionreset .block_exception_detected .text_exception {[m
[32m+[m[32m    width: 670px;[m
[32m+[m[32m    padding: 30px 44px 24px 46px;[m
[32m+[m[32m    position: relative;[m
[32m+[m[32m}[m
[32m+[m
[32m+[m[32m.sf-exceptionreset .text_exception .open_quote,[m
[32m+[m[32m.sf-exceptionreset .text_exception .close_quote {[m
[32m+[m[32m    position: absolute;[m
[32m+[m[32m}[m
[32m+[m[32m.sf-exceptionreset .open_quote {[m
[32m+[m[32m    top: 0;[m
[32m+[m[32m    left: 0;[m
[32m+[m[32m}[m
[32m+[m[32m.sf-exceptionreset .close_quote {[m
[32m+[m[32m    bottom: 0;[m
[32m+[m[32m    right: 50px;[m
[32m+[m[32m}[m
[32m+[m
[32m+[m[32m.sf-exceptionreset .block_exception p {[m
[32m+[m[32m    font-family: Arial, Helvetica, sans-serif;[m
[32m+[m[32m}[m
[32m+[m[32m.sf-exceptionreset .block_exception p a,[m
[32m+[m[32m.sf-exceptionreset .block_exception p a:hover {[m
[32m+[m[32m    color: #565656;[m
[32m+[m[32m}[m
[32m+[m
[32m+[m[32m.sf-exceptionreset h2 {[m
[32m+[m[32m    font-size: 16px;[m
[32m+[m[32m    font-family: Arial, Helvetica, sans-serif;[m
[32m+[m[32m    padding-bottom: 16px;[m
[32m+[m[32m}[m
[32m+[m
[32m+[m[32m.sf-exceptionreset li a {[m
[32m+[m[32m    background: none;[m
[32m+[m[32m    color: #868686;[m
[32m+[m[32m    text-decoration: none;[m
[32m+[m[32m}[m
[32m+[m
[32m+[m[32m.sf-exceptionreset li a:hover {[m
[32m+[m[32m    background: none;[m
[32m+[m[32m    color: #313131;[m
[32m+[m[32m    text-decoration: underline;[m
[32m+[m[32m}[m
[32m+[m
[32m+[m[32m.sf-exceptionreset .logs h2 {[m
[32m+[m[32m    float: left;[m
[32m+[m[32m    width: 654px;[m
[32m+[m[32m}[m
[32m+[m
[32m+[m[32m.sf-exceptionreset .error_count {[m
[32m+[m[32m    float: right;[m
[32m+[m[32m    width: 170px;[m
[32m+[m[32m    text-align: right;[m
[32m+[m[32m}[m
[32m+[m
[32m+[m[32m.sf-exceptionreset .error_count span {[m
[32m+[m[32m    display: inline-block;[m
[32m+[m[32m    background-color: #aacd4e;[m
[32m+[m[32m    -moz-border-radius: 6px;[m
[32m+[m[32m    -webkit-border-radius: 6px;[m
[32m+[m[32m    border-radius: 6px;[m
[32m+[m[32m    padding: 4px;[m
[32m+[m[32m    color: white;[m
[32m+[m[32m    margin-right: 2px;[m
[32m+[m[32m    font-size: 11px;[m
[32m+[m[32m    font-weight: bold;[m
[32m+[m[32m}[m
[32m+[m
[32m+[m[32m.sf-exceptionreset .toggle {[m
[32m+[m[32m    vertical-align: middle;[m
[32m+[m[32m}[m
[32m+[m
[32m+[m[32m.sf-exceptionreset .linked ul,[m[41m [m
[32m+[m[32m.sf-exceptionreset .linked li {[m
[32m+[m[32m    display: inline;[m
[32m+[m[32m}[m
[32m+[m
[32m+[m[32m.sf-exceptionreset #output_content {[m
[32m+[m[32m    color: #000;[m
[32m+[m[32m    font-size: 12px;[m
[32m+[m[32m}[m
[32m+[m
[32m+[m[32m.sf-exceptionreset ol {[m
[32m+[m[32m    padding: 10px 0;[m
[32m+[m[32m}[m
[32m+[m[32m.sf-exceptionreset ol li {[m
[32m+[m[32m    list-style: decimal;[m[41m [m
[32m+[m[32m    margin-left: 20px;[m[41m [m
[32m+[m[32m    padding: 2px;[m
[32m+[m[32m    padding-bottom: 20px;[m
[32m+[m[32m}[m
[32m+[m[32m.sf-exceptionreset ol ol li {[m
[32m+[m[32m    list-style-position: inside;[m[41m [m
[32m+[m[32m    margin-left: 0;[m[41m [m
[32m+[m[32m    white-space: nowrap;[m[41m [m
[32m+[m[32m    font-size: 12px;[m[41m [m
[32m+[m[32m    padding-bottom: 0;[m
[32m+[m[32m}[m
[32m+[m[32m.sf-exceptionreset li .selected {[m
[32m+[m[32m    background-color: #ffd;[m
[32m+[m[32m}[m
[1mdiff --git a/web/bundles/framework/css/exception_layout.css b/web/bundles/framework/css/exception_layout.css[m
[1mnew file mode 100644[m
[1mindex 0000000..95eac9e[m
[1m--- /dev/null[m
[1m+++ b/web/bundles/framework/css/exception_layout.css[m
[36m@@ -0,0 +1,131 @@[m
[32m+[m[32mhtml {[m
[32m+[m[32m    background: #eee;[m
[32m+[m[32m}[m
[32m+[m
[32m+[m[32mbody {[m
[32m+[m[32m    font: 11px Verdana, Arial, sans-serif;[m[41m [m
[32m+[m[32m    color: #333;[m
[32m+[m[32m}[m
[32m+[m
[32m+[m[32m.sf-exceptionreset, .sf-exceptionreset .block, .sf-exceptionreset #message {[m
[32m+[m[32m    margin: auto;[m
[32m+[m[32m}[m
[32m+[m
[32m+[m[32mimg {[m
[32m+[m[32m    border: 0;[m
[32m+[m[32m}[m
[32m+[m
[32m+[m[32m.clear {[m
[32m+[m[32m    clear: both;[m
[32m+[m[32m    height: 0;[m
[32m+[m[32m    font-size: 0;[m
[32m+[m[32m    line-height: 0;[m
[32m+[m[32m}[m
[32m+[m
[32m+[m[32m.clear_fix:after {[m
[32m+[m[32m    content: "\0020";[m
[32m+[m[32m    display: block;[m
[32m+[m[32m    height: 0;[m
[32m+[m[32m    clear: both;[m
[32m+[m[32m    visibility: hidden;[m
[32m+[m[32m}[m
[32m+[m[32m.clear_fix {[m
[32m+[m[32m    display: inline-block;[m
[32m+[m[32m}[m
[32m+[m[32m* html .clear_fix {[m
[32m+[m[32m    height: 1%;[m
[32m+[m[32m}[m
[32m+[m[32m.clear_fix {[m
[32m+[m[32m    display: block;[m
[32m+[m[32m}[m
[32m+[m
[32m+[m[32m.header {[m
[32m+[m[32m    padding: 30px 30px 20px 30px;[m
[32m+[m[32m}[m
[32m+[m
[32m+[m[32m.header_logo {[m
[32m+[m[32m    float: left;[m
[32m+[m[32m}[m
[32m+[m
[32m+[m[32m.search {[m
[32m+[m[32m    float: right;[m
[32m+[m[32m    padding-top: 20px;[m
[32m+[m[32m}[m
[32m+[m
[32m+[m[32m.search label {[m
[32m+[m[32m    line-height: 28px;[m[41m [m
[32m+[m[32m    vertical-align: middle;[m
[32m+[m[32m}[m
[32m+[m
[32m+[m[32m.search input {[m
[32m+[m[32m    width: 188px;[m[41m [m
[32m+[m[32m    margin-right: 10px;[m[41m [m
[32m+[m[32m    font-size: 12px;[m[41m [m
[32m+[m[32m    border: 1px solid #dadada;[m[41m [m
[32m+[m[32m    background: #FFFFFF url(../images/input_bg.gif) repeat-x left top;[m
[32m+[m[32m    padding: 5px 6px;[m
[32m+[m[32m    color: #565656;[m
[32m+[m[32m}[m
[32m+[m
[32m+[m[32m.search input[type="search"] {[m
[32m+[m[32m    -webkit-appearance: textfield;[m
[32m+[m[32m}[m
[32m+[m
[32m+[m[32m.search button {[m
[32m+[m[32m    -webkit-appearance: button-bevel;[m
[32m+[m[32m    float: none;[m
[32m+[m[32m    padding: 0;[m
[32m+[m[32m    margin: 0;[m
[32m+[m[32m    overflow: visible;[m
[32m+[m[32m    width: auto;[m
[32m+[m[32m    text-decoration: none;[m
[32m+[m[32m    cursor: pointer;[m
[32m+[m[32m    white-space: nowrap;[m
[32m+[m[32m    display: inline-block;[m
[32m+[m[32m    text-align: center;[m
[32m+[m[32m    vertical-align: middle;[m
[32m+[m[32m    border: 0;[m
[32m+[m[32m    background: none;[m
[32m+[m[32m}[m
[32m+[m
[32m+[m[32m.search button:-moz-focus-inner {[m
[32m+[m[32m    padding: 0;[m
[32m+[m[32m    border: none;[m
[32m+[m[32m}[m
[32m+[m
[32m+[m[32m.search button:hover {[m
[32m+[m[32m    text-decoration: none;[m
[32m+[m[32m}[m
[32m+[m
[32m+[m[32m.search button span span,[m
[32m+[m[32m.search button span span span {[m
[32m+[m[32m    position: static;[m
[32m+[m[32m}[m
[32m+[m
[32m+[m[32m.search button span {[m
[32m+[m[32m    position: relative;[m
[32m+[m[32m    text-decoration: none;[m
[32m+[m[32m    display: block;[m
[32m+[m[32m    height: 28px;[m
[32m+[m[32m    float: left;[m
[32m+[m[32m    padding: 0 0 0 8px;[m
[32m+[m[32m    background: transparent url(../images/border_l.png) no-repeat top left;[m
[32m+[m[32m}[m
[32m+[m
[32m+[m[32m.search button span span {[m
[32m+[m[32m    padding: 0 8px 0 0;[m
[32m+[m[32m    background: transparent url(../images/border_r.png) right top no-repeat;[m
[32m+[m[32m}[m
[32m+[m
[32m+[m[32m.search button span span span {[m
[32m+[m[32m    padding: 0 7px;[m
[32m+[m[32m    font: bold 11px Arial, Helvetica, sans-serif;[m
[32m+[m[32m    color: #6b6b6b;[m
[32m+[m[32m    line-height: 28px;[m
[32m+[m[32m    background: transparent url(../images/btn_bg.png) repeat-x top left;[m
[32m+[m[32m}[m
[32m+[m
[32m+[m[32m#content {[m
[32m+[m[32m    width: 970px;[m
[32m+[m[32m    margin: 0 auto;[m
[32m+[m[32m}[m
[1mdiff --git a/web/bundles/framework/images/blue_picto_less.gif b/web/bundles/framework/images/blue_picto_less.gif[m
[1mnew file mode 100644[m
[1mindex 0000000..dc70f6a[m
Binary files /dev/null and b/web/bundles/framework/images/blue_picto_less.gif differ
[1mdiff --git a/web/bundles/framework/images/blue_picto_more.gif b/web/bundles/framework/images/blue_picto_more.gif[m
[1mnew file mode 100644[m
[1mindex 0000000..098e388[m
Binary files /dev/null and b/web/bundles/framework/images/blue_picto_more.gif differ
[1mdiff --git a/web/bundles/framework/images/border_l.png b/web/bundles/framework/images/border_l.png[m
[1mnew file mode 100644[m
[1mindex 0000000..3d96564[m
Binary files /dev/null and b/web/bundles/framework/images/border_l.png differ
[1mdiff --git a/web/bundles/framework/images/border_r.png b/web/bundles/framework/images/border_r.png[m
[1mnew file mode 100644[m
[1mindex 0000000..3665355[m
Binary files /dev/null and b/web/bundles/framework/images/border_r.png differ
[1mdiff --git a/web/bundles/framework/images/btn_bg.png b/web/bundles/framework/images/btn_bg.png[m
[1mnew file mode 100644[m
[1mindex 0000000..f168bfa[m
Binary files /dev/null and b/web/bundles/framework/images/btn_bg.png differ
[1mdiff --git a/web/bundles/framework/images/close_quote.gif b/web/bundles/framework/images/close_quote.gif[m
[1mnew file mode 100644[m
[1mindex 0000000..b97296a[m
Binary files /dev/null and b/web/bundles/framework/images/close_quote.gif differ
[1mdiff --git a/web/bundles/framework/images/exception_detected.gif b/web/bundles/framework/images/exception_detected.gif[m
[1mnew file mode 100644[m
[1mindex 0000000..fc41287[m
Binary files /dev/null and b/web/bundles/framework/images/exception_detected.gif differ
[1mdiff --git a/web/bundles/framework/images/grey_magnifier.png b/web/bundles/framework/images/grey_magnifier.png[m
[1mnew file mode 100644[m
[1mindex 0000000..3c88b6a[m
Binary files /dev/null and b/web/bundles/framework/images/grey_magnifier.png differ
[1mdiff --git a/web/bundles/framework/images/icon_log.png b/web/bundles/framework/images/icon_log.png[m
[1mnew file mode 100644[m
[1mindex 0000000..a56e582[m
Binary files /dev/null and b/web/bundles/framework/images/icon_log.png differ
[1mdiff --git a/web/bundles/framework/images/input_bg.gif b/web/bundles/framework/images/input_bg.gif[m
[1mnew file mode 100644[m
[1mindex 0000000..7c0efc1[m
Binary files /dev/null and b/web/bundles/framework/images/input_bg.gif differ
[1mdiff --git a/web/bundles/framework/images/logo_symfony.gif b/web/bundles/framework/images/logo_symfony.gif[m
[1mnew file mode 100644[m
[1mindex 0000000..703cf45[m
Binary files /dev/null and b/web/bundles/framework/images/logo_symfony.gif differ
[1mdiff --git a/web/bundles/framework/images/open_quote.gif b/web/bundles/framework/images/open_quote.gif[m
[1mnew file mode 100644[m
[1mindex 0000000..0e116ce[m
Binary files /dev/null and b/web/bundles/framework/images/open_quote.gif differ
[1mdiff --git a/web/bundles/sensiodistribution/webconfigurator/css/configure.css b/web/bundles/sensiodistribution/webconfigurator/css/configure.css[m
[1mnew file mode 100644[m
[1mindex 0000000..71bf225[m
[1m--- /dev/null[m
[1m+++ b/web/bundles/sensiodistribution/webconfigurator/css/configure.css[m
[36m@@ -0,0 +1,438 @@[m
[32m+[m[32m/*[m
[32m+[m[32mCopyright (c) 2010, Yahoo! Inc. All rights reserved.[m
[32m+[m[32mCode licensed under the BSD License:[m
[32m+[m[32mhttp://developer.yahoo.com/yui/license.html[m
[32m+[m[32mversion: 2.8.2r1[m
[32m+[m
[32m+[m[32mReset[m
[32m+[m[32m*/[m
[32m+[m
[32m+[m[32mhtml{color:#000;background:#FFF;}body,div,dl,dt,dd,ul,ol,li,h1,h2,h3,h4,h5,h6,pre,code,form,fieldset,legend,input,button,textarea,p,blockquote,th,td{margin:0;padding:0;}table{border-collapse:collapse;border-spacing:0;}fieldset,img{border:0;}address,caption,cite,code,dfn,em,strong,th,var,optgroup{font-style:inherit;font-weight:inherit;}del,ins{text-decoration:none;}li{list-style:none;}caption,th{text-align:left;}h1,h2,h3,h4,h5,h6{font-size:100%;font-weight:normal;}q:before,q:after{content:'';}abbr,acronym{border:0;font-variant:normal;}sup{vertical-align:baseline;}sub{vertical-align:baseline;}legend{color:#000;}input,button,textarea,select,optgroup,option{font-family:inherit;font-size:inherit;font-style:inherit;font-weight:inherit;}input,button,textarea,select{*font-size:100%;}[m
[32m+[m
[32m+[m[32mhtml, body[m
[32m+[m[32m{[m
[32m+[m[32m    background-color: #EFEFEF;[m
[32m+[m[32m}[m
[32m+[m
[32m+[m[32mbody[m
[32m+[m[32m{[m
[32m+[m[32m    font-size:        14px;[m
[32m+[m[32m    font-family:      "Lucida Sans Unicode", "Lucida Grande", Verdana, Arial, Helvetica, sans-serif;[m
[32m+[m[32m    color:            #313131;[m
[32m+[m[32m}[m
[32m+[m
[32m+[m[32ma[m
[32m+[m[32m{[m
[32m+[m[32m    color:           #08C;[m
[32m+[m[32m    text-decoration: none;[m
[32m+[m[32m}[m
[32m+[m
[32m+[m[32ma:hover[m
[32m+[m[32m{[m
[32m+[m[32m    text-decoration: underline;[m
[32m+[m[32m}[m
[32m+[m
[32m+[m[32mstrong[m
[32m+[m[32m{[m
[32m+[m[32m    font-weight: bold;[m
[32m+[m[32m}[m
[32m+[m
[32m+[m[32mem[m
[32m+[m[32m{[m
[32m+[m[32m    font-style: italic;[m
[32m+[m[32m}[m
[32m+[m
[32m+[m[32mh1, h2, h3[m
[32m+[m[32m{[m
[32m+[m[32m    font-family:    Georgia, "Times New Roman", Times, serif;[m
[32m+[m[32m    color:          #404040;[m
[32m+[m[32m}[m
[32m+[m
[32m+[m[32mh1[m
[32m+[m[32m{[m
[32m+[m[32m    font-size:      45px;[m
[32m+[m[32m    padding-bottom: 30px;[m
[32m+[m[32m}[m
[32m+[m
[32m+[m[32mh2[m
[32m+[m[32m{[m
[32m+[m[32m    font-weight:   bold;[m
[32m+[m[32m    color:         #FFFFFF;[m
[32m+[m[32m    /* Font is duplicated of body (sans-serif) */[m
[32m+[m[32m    font-family:      "Lucida Sans Unicode", "Lucida Grande", Verdana, Arial, Helvetica, sans-serif;[m
[32m+[m
[32m+[m[32m    margin-bottom:    10px;[m
[32m+[m[32m    background-color: #aacd4e;[m
[32m+[m[32m    padding:          2px 4px;[m
[32m+[m[32m    display:          inline-block;[m
[32m+[m[32m    text-transform:   uppercase;[m
[32m+[m
[32m+[m[32m}[m
[32m+[m
[32m+[m[32mh2.configure-error[m
[32m+[m[32m{[m
[32m+[m[32m    background-color: #CC514F;[m
[32m+[m[32m}[m
[32m+[m
[32m+[m[32mp[m
[32m+[m[32m{[m
[32m+[m[32m    line-height:    20px;[m
[32m+[m[32m    padding-bottom: 20px;[m
[32m+[m[32m}[m
[32m+[m
[32m+[m[32mul a[m
[32m+[m[32m{[m
[32m+[m[32m    background: url(../images/blue-arrow.png) no-repeat right 6px;[m
[32m+[m[32m    padding-right: 10px;[m
[32m+[m[32m}[m
[32m+[m
[32m+[m[32mul, ol[m
[32m+[m[32m{[m
[32m+[m[32m    padding-left: 20px;[m
[32m+[m[32m}[m
[32m+[m
[32m+[m[32mli[m
[32m+[m[32m{[m
[32m+[m[32m    padding-bottom: 18px;[m
[32m+[m[32m}[m
[32m+[m
[32m+[m[32mol li[m
[32m+[m[32m{[m
[32m+[m[32m    list-style-type: decimal;[m
[32m+[m[32m}[m
[32m+[m
[32m+[m[32mul li[m
[32m+[m[32m{[m
[32m+[m[32m    list-style-type: none;[m
[32m+[m[32m}[m
[32m+[m
[32m+[m[32m#symfony-header[m
[32m+[m[32m{[m
[32m+[m[32m    position: relative;[m
[32m+[m[32m    padding: 30px 30px 20px 30px;[m
[32m+[m[32m}[m
[32m+[m
[32m+[m[32m#symfony-wrapper[m
[32m+[m[32m{[m
[32m+[m[32m    width:  970px;[m
[32m+[m[32m    margin: 0 auto;[m
[32m+[m[32m}[m
[32m+[m
[32m+[m[32m#symfony-content[m
[32m+[m[32m{[m
[32m+[m[32m    background-color:           white;[m
[32m+[m[32m    border:                     1px solid #DFDFDF;[m
[32m+[m[32m    padding:                    50px;[m
[32m+[m[32m    -moz-border-radius:         16px;[m
[32m+[m[32m    -webkit-border-radius:      16px;[m
[32m+[m[32m    border-radius:              16px;[m
[32m+[m[32m    margin-bottom:              20px;[m
[32m+[m[32m}[m
[32m+[m
[32m+[m[32m#symfony-header[m
[32m+[m[32m{[m
[32m+[m[32m    position: relative;[m
[32m+[m[32m    padding: 30px 30px 20px 30px;[m
[32m+[m[32m}[m
[32m+[m
[32m+[m[32m#symfony-wrapper[m
[32m+[m[32m{[m
[32m+[m[32m    width:  970px;[m
[32m+[m[32m    margin: 0 auto;[m
[32m+[m[32m}[m
[32m+[m
[32m+[m[32m#symfony-content[m
[32m+[m[32m{[m
[32m+[m[32m    background-color:           white;[m
[32m+[m[32m    border:                     1px solid #DFDFDF;[m
[32m+[m[32m    padding:                    50px;[m
[32m+[m[32m    -moz-border-radius:         16px;[m
[32m+[m[32m    -webkit-border-radius:      16px;[m
[32m+[m[32m    border-radius:              16px;[m
[32m+[m[32m    margin-bottom:              20px;[m
[32m+[m[32m}[m
[32m+[m[32mhtml, body[m
[32m+[m[32m{[m
[32m+[m[32m    background-color: #EFEFEF;[m
[32m+[m[32m}[m
[32m+[m
[32m+[m[32mbody[m
[32m+[m[32m{[m
[32m+[m[32m    font-size:        14px;[m
[32m+[m[32m    font-family:      "Lucida Sans Unicode", "Lucida Grande", Verdana, Arial, Helvetica, sans-serif;[m
[32m+[m[32m    color:            #313131;[m
[32m+[m[32m}[m
[32m+[m
[32m+[m[32ma[m
[32m+[m[32m{[m
[32m+[m[32m    color:           #08C;[m
[32m+[m[32m    text-decoration: none;[m
[32m+[m[32m}[m
[32m+[m
[32m+[m[32ma:hover[m
[32m+[m[32m{[m
[32m+[m[32m    text-decoration: underline;[m
[32m+[m[32m}[m
[32m+[m
[32m+[m[32mstrong[m
[32m+[m[32m{[m
[32m+[m[32m    font-weight: bold;[m
[32m+[m[32m}[m
[32m+[m
[32m+[m[32m#symfony-header[m
[32m+[m[32m{[m
[32m+[m[32m    position: relative;[m
[32m+[m[32m    padding: 30px 30px 20px 30px;[m
[32m+[m[32m}[m
[32m+[m
[32m+[m[32m#symfony-wrapper[m
[32m+[m[32m{[m
[32m+[m[32m    width:  970px;[m
[32m+[m[32m    margin: 0 auto;[m
[32m+[m[32m}[m
[32m+[m
[32m+[m[32m#symfony-content[m
[32m+[m[32m{[m
[32m+[m[32m    background-color:           white;[m
[32m+[m[32m    border:                     1px solid #DFDFDF;[m
[32m+[m[32m    padding:                    50px;[m
[32m+[m[32m    -moz-border-radius:         16px;[m
[32m+[m[32m    -webkit-border-radius:      16px;[m
[32m+[m[32m    border-radius:              16px;[m
[32m+[m[32m    margin-bottom:              20px;[m
[32m+[m[32m}[m
[32m+[m[32mhtml, body[m
[32m+[m[32m{[m
[32m+[m[32m    background-color: #EFEFEF;[m
[32m+[m[32m}[m
[32m+[m
[32m+[m[32mbody[m
[32m+[m[32m{[m
[32m+[m[32m    font-size:        14px;[m
[32m+[m[32m    font-family:      "Lucida Sans Unicode", "Lucida Grande", Verdana, Arial, Helvetica, sans-serif;[m
[32m+[m[32m    color:            #313131;[m
[32m+[m[32m}[m
[32m+[m
[32m+[m[32ma[m
[32m+[m[32m{[m
[32m+[m[32m    color:           #08C;[m
[32m+[m[32m    text-decoration: none;[m
[32m+[m[32m}[m
[32m+[m
[32m+[m[32ma:hover[m
[32m+[m[32m{[m
[32m+[m[32m    text-decoration: underline;[m
[32m+[m[32m}[m
[32m+[m
[32m+[m[32mstrong[m
[32m+[m[32m{[m
[32m+[m[32m    font-weight: bold;[m
[32m+[m[32m}[m
[32m+[m
[32m+[m[32m#symfony-header[m
[32m+[m[32m{[m
[32m+[m[32m    position: relative;[m
[32m+[m[32m    padding: 30px 30px 20px 30px;[m
[32m+[m[32m}[m
[32m+[m
[32m+[m[32m#symfony-wrapper[m
[32m+[m[32m{[m
[32m+[m[32m    width:  970px;[m
[32m+[m[32m    margin: 0 auto;[m
[32m+[m[32m}[m
[32m+[m
[32m+[m[32m#symfony-content[m
[32m+[m[32m{[m
[32m+[m[32m    background-color:           white;[m
[32m+[m[32m    border:                     1px solid #DFDFDF;[m
[32m+[m[32m    padding:                    50px;[m
[32m+[m[32m    -moz-border-radius:         16px;[m
[32m+[m[32m    -webkit-border-radius:      16px;[m
[32m+[m[32m    border-radius:              16px;[m
[32m+[m[32m    margin-bottom:              5px;[m
[32m+[m[32m}[m
[32m+[m
[32m+[m[32m#symfony-search[m
[32m+[m[32m{[m
[32m+[m[32m    position: absolute;[m
[32m+[m
[32m+[m[32m    top:   50px;[m
[32m+[m[32m    right: 30px;[m
[32m+[m[32m}[m
[32m+[m
[32m+[m[32m#symfony-search-field[m
[32m+[m[32m{[m
[32m+[m[32m    width: 190px;[m
[32m+[m[32m}[m
[32m+[m
[32m+[m[32m#symfony-search label[m
[32m+[m[32m{[m
[32m+[m[32m    display: block;[m
[32m+[m[32m    float: left;[m
[32m+[m[32m    width: 20px;[m
[32m+[m[32m    height: 25px;[m
[32m+[m[32m    background: url(../images/search.png) no-repeat left 5px;[m
[32m+[m[32m}[m
[32m+[m
[32m+[m[32m#symfony-search label span[m
[32m+[m[32m{[m
[32m+[m[32m    display: none;[m
[32m+[m[32m}[m
[32m+[m
[32m+[m[32minput[type=text][m
[32m+[m[32m{[m
[32m+[m[32m    border:      1px solid #DADADA;[m
[32m+[m[32m    background:  white url(../images/field-background.gif) repeat-x left top;[m
[32m+[m[32m    padding:     5px 6px;[m
[32m+[m[32m    color:       #565656;[m
[32m+[m[32m    font-family: 'Lucida Sans Unicode', 'Lucida Grande', Verdana, Arial, Helvetica, sans-serif;[m
[32m+[m[32m    font-size:   12px;[m
[32m+[m[32m}[m
[32m+[m
[32m+[m[32m.symfony-button-grey,[m
[32m+[m[32m.symfony-button-green[m
[32m+[m[32m{[m
[32m+[m[32m    font-size: 0.85em;[m
[32m+[m[32m    font-weight: bold;[m
[32m+[m
[32m+[m[32m    cursor: pointer;[m
[32m+[m
[32m+[m[32m    display: inline-block;[m
[32m+[m[32m    outline: none;[m
[32m+[m
[32m+[m[32m    text-align:     center;[m
[32m+[m[32m    text-transform: uppercase;[m
[32m+[m
[32m+[m[32m    padding: 3px 10px;[m
[32m+[m
[32m+[m[32m    text-shadow: 0 1px 1px rgba(0,0,0,.3);[m
[32m+[m
[32m+[m[32m    -webkit-border-radius: 4px;[m
[32m+[m[32m    -moz-border-radius:    4px;[m
[32m+[m[32m    border-radius:         4px;[m
[32m+[m[32m}[m
[32m+[m
[32m+[m[32m.symfony-button-grey[m
[32m+[m[32m{[m
[32m+[m[32m    color:       #868686;[m
[32m+[m[32m    font-weight: normal;[m
[32m+[m
[32m+[m[32m    padding:    5px 10px;[m
[32m+[m[32m    border:     solid 1px #d7d7d7;[m
[32m+[m[32m    background: #ffffff;[m
[32m+[m[32m    background: -webkit-gradient(linear, left top, left bottom, from(#ffffff), to(#d7d7d7));[m
[32m+[m[32m    background: -moz-linear-gradient(top,  #ffffff,  #d7d7d7);[m
[32m+[m[32m    filter:  progid:DXImageTransform.Microsoft.gradient(startColorstr='#ffffff', endColorstr='#d7d7d7');[m
[32m+[m[32m}[m
[32m+[m
[32m+[m[32m.symfony-button-green[m
[32m+[m[32m{[m
[32m+[m[32m    padding: 5px 12px;[m
[32m+[m
[32m+[m[32m    color: white;[m
[32m+[m
[32m+[m[32m    border:     solid 1px #a7da39;[m
[32m+[m[32m    background: #a7da39;[m
[32m+[m[32m    background: -webkit-gradient(linear, left top, left bottom, from(#a7da39), to(#6a9211));[m
[32m+[m[32m    background: -moz-linear-gradient(top,  #a7da39,  #6a9211);[m
[32m+[m[32m    filter:  progid:DXImageTransform.Microsoft.gradient(startColorstr='#a7da39', endColorstr='#6a9211');[m
[32m+[m[32m}[m
[32m+[m
[32m+[m[32m.symfony-block-steps span[m
[32m+[m[32m{[m
[32m+[m[32m    display: inline-block;[m
[32m+[m[32m    padding: 2px 3px;[m
[32m+[m[32m  font-size:      11px;[m
[32m+[m[32m  line-height:    15px;[m
[32m+[m[32m  color:          #868686;[m
[32m+[m[32m  font-weight:    bold;[m
[32m+[m[32m  text-transform: uppercase;[m
[32m+[m[32m}[m
[32m+[m
[32m+[m[32m.symfony-block-steps span.selected[m
[32m+[m[32m{[m
[32m+[m[32m    background-color: #aacd4e;[m
[32m+[m[32m    color:            #FFFFFF;[m
[32m+[m[32m}[m
[32m+[m
[32m+[m[32mh1[m
[32m+[m[32m{[m
[32m+[m[32m    margin-top: 10px;[m
[32m+[m[32m    font-size: 26px;[m
[32m+[m[32m}[m
[32m+[m
[32m+[m[32m.symfony-form-row[m
[32m+[m[32m{[m
[32m+[m[32m    padding-bottom: 40px;[m
[32m+[m[32m}[m
[32m+[m
[32m+[m[32m.symfony-form-column[m
[32m+[m[32m{[m
[32m+[m[32m    width: 430px;[m
[32m+[m[32m    float: left;[m
[32m+[m[32m}[m
[32m+[m
[32m+[m[32m.symfony-form-footer[m
[32m+[m[32m{[m
[32m+[m[32m    padding-top: 20px;[m
[32m+[m[32m    clear: both;[m
[32m+[m[32m}[m
[32m+[m
[32m+[m[32m.symfony-form-field[m
[32m+[m[32m{[m
[32m+[m[32m    height: 20px;[m
[32m+[m[32m}[m
[32m+[m
[32m+[m[32m.symfony-form-row label[m
[32m+[m[32m{[m
[32m+[m[32m    display:        block;[m
[32m+[m[32m    padding-bottom: 8px;[m
[32m+[m[32m}[m
[32m+[m
[32m+[m[32m.symfony-form-field input[type=text],[m
[32m+[m[32m.symfony-form-field input[type=password],[m
[32m+[m[32m.symfony-form-field textarea,[m
[32m+[m[32m.symfony-form-field select[m
[32m+[m[32m{[m
[32m+[m[32m    font-size: 13px;[m
[32m+[m[32m    color:     #565656;[m
[32m+[m[32m    width:     200px;[m
[32m+[m[32m}[m
[32m+[m
[32m+[m[32m.symfony-form-field input[type=text],[m
[32m+[m[32m.symfony-form-field input[type=password],[m
[32m+[m[32m.symfony-form-field textarea[m
[32m+[m[32m{[m
[32m+[m[32m    border:     1px solid #dadada;[m
[32m+[m[32m    background: #FFFFFF url(../images/background-textfield.gif) repeat-x left top;[m
[32m+[m[32m    width:      194px;[m
[32m+[m[32m    padding:    5px 6px;[m
[32m+[m[32m}[m
[32m+[m
[32m+[m[32m.symfony-form-errors ul[m
[32m+[m[32m{[m
[32m+[m[32m    padding: 0;[m
[32m+[m[32m}[m
[32m+[m
[32m+[m[32m.symfony-form-errors li[m
[32m+[m[32m{[m
[32m+[m[32m    background:  url(../images/notification.gif) no-repeat left 6px;[m
[32m+[m[32m    font-size:   11px;[m
[32m+[m[32m    line-height: 16px;[m
[32m+[m[32m    color:       #759e1a;[m
[32m+[m[32m    padding:     10px 25px;[m
[32m+[m[32m}[m
[32m+[m
[32m+[m[32m.symfony-configuration[m
[32m+[m[32m{[m
[32m+[m[32m    margin: 10px 0;[m
[32m+[m[32m    width:  100%;[m
[32m+[m[32m    height: 240px;[m
[32m+[m[32m}[m
[32m+[m
[32m+[m[32m.version[m
[32m+[m[32m{[m
[32m+[m[32m    text-align: right;[m
[32m+[m[32m    font-size: 10px;[m
[32m+[m[32m    margin-right: 20px;[m
[32m+[m[32m}[m
[1mdiff --git a/web/bundles/sensiodistribution/webconfigurator/css/install.css b/web/bundles/sensiodistribution/webconfigurator/css/install.css[m
[1mnew file mode 100644[m
[1mindex 0000000..68b8a17[m
[1m--- /dev/null[m
[1m+++ b/web/bundles/sensiodistribution/webconfigurator/css/install.css[m
[36m@@ -0,0 +1,374 @@[m
[32m+[m[32m/*[m
[32m+[m[32mCopyright (c) 2010, Yahoo! Inc. All rights reserved.[m
[32m+[m[32mCode licensed under the BSD License:[m
[32m+[m[32mhttp://developer.yahoo.com/yui/license.html[m
[32m+[m[32mversion: 2.8.2r1[m
[32m+[m
[32m+[m[32mReset[m
[32m+[m[32m*/[m
[32m+[m
[32m+[m[32mhtml{color:#000;background:#FFF;}body,div,dl,dt,dd,ul,ol,li,h1,h2,h3,h4,h5,h6,pre,code,form,fieldset,legend,input,button,textarea,p,blockquote,th,td{margin:0;padding:0;}table{border-collapse:collapse;border-spacing:0;}fieldset,img{border:0;}address,caption,cite,code,dfn,em,strong,th,var,optgroup{font-style:inherit;font-weight:inherit;}del,ins{text-decoration:none;}li{list-style:none;}caption,th{text-align:left;}h1,h2,h3,h4,h5,h6{font-size:100%;font-weight:normal;}q:before,q:after{content:'';}abbr,acronym{border:0;font-variant:normal;}sup{vertical-align:baseline;}sub{vertical-align:baseline;}legend{color:#000;}input,button,textarea,select,optgroup,option{font-family:inherit;font-size:inherit;font-style:inherit;font-weight:inherit;}input,button,textarea,select{*font-size:100%;}[m
[32m+[m
[32m+[m[32mhtml, body[m
[32m+[m[32m{[m
[32m+[m[32m    background-color: #EFEFEF;[m
[32m+[m[32m}[m
[32m+[m
[32m+[m[32mbody[m
[32m+[m[32m{[m
[32m+[m[32m    font-size:        14px;[m
[32m+[m[32m    font-family:      "Lucida Sans Unicode", "Lucida Grande", Verdana, Arial, Helvetica, sans-serif;[m
[32m+[m[32m    color:            #313131;[m
[32m+[m[32m}[m
[32m+[m
[32m+[m[32ma[m
[32m+[m[32m{[m
[32m+[m[32m    color:           #08C;[m
[32m+[m[32m    text-decoration: none;[m
[32m+[m[32m}[m
[32m+[m
[32m+[m[32ma:hover[m
[32m+[m[32m{[m
[32m+[m[32m    text-decoration: underline;[m
[32m+[m[32m}[m
[32m+[m
[32m+[m[32mstrong[m
[32m+[m[32m{[m
[32m+[m[32m    font-weight: bold;[m
[32m+[m[32m}[m
[32m+[m
[32m+[m[32mem[m
[32m+[m[32m{[m
[32m+[m[32m    font-style: italic;[m
[32m+[m[32m}[m
[32m+[m
[32m+[m[32mh1, h2, h3[m
[32m+[m[32m{[m
[32m+[m[32m    font-family:    Georgia, "Times New Roman", Times, serif;[m
[32m+[m[32m    color:          #404040;[m
[32m+[m[32m}[m
[32m+[m
[32m+[m[32mh1[m
[32m+[m[32m{[m
[32m+[m[32m    font-size:      45px;[m
[32m+[m[32m    padding-bottom: 30px;[m
[32m+[m[32m}[m
[32m+[m
[32m+[m[32mh2[m
[32m+[m[32m{[m
[32m+[m[32m    font-weight:   bold;[m
[32m+[m[32m    color:         #FFFFFF;[m
[32m+[m[32m    /* Font is duplicated of body (sans-serif) */[m
[32m+[m[32m    font-family:      "Lucida Sans Unicode", "Lucida Grande", Verdana, Arial, Helvetica, sans-serif;[m
[32m+[m
[32m+[m[32m    margin-bottom:    10px;[m
[32m+[m[32m    background-color: #aacd4e;[m
[32m+[m[32m    padding:          2px 4px;[m
[32m+[m[32m    display:          inline-block;[m
[32m+[m[32m    text-transform:   uppercase;[m
[32m+[m
[32m+[m[32m}[m
[32m+[m
[32m+[m[32mp[m
[32m+[m[32m{[m
[32m+[m[32m    line-height:    20px;[m
[32m+[m[32m    padding-bottom: 20px;[m
[32m+[m[32m}[m
[32m+[m
[32m+[m[32mul a[m
[32m+[m[32m{[m
[32m+[m[32m    background: url(../images/blue-arrow.png) no-repeat right 6px;[m
[32m+[m[32m    padding-right: 10px;[m
[32m+[m[32m}[m
[32m+[m
[32m+[m[32mul, ol[m
[32m+[m[32m{[m
[32m+[m[32m    padding-left: 20px;[m
[32m+[m[32m}[m
[32m+[m
[32m+[m[32mli[m
[32m+[m[32m{[m
[32m+[m[32m    padding-bottom: 18px;[m
[32m+[m[32m}[m
[32m+[m
[32m+[m[32mol li[m
[32m+[m[32m{[m
[32m+[m[32m    list-style-type: decimal;[m
[32m+[m[32m}[m
[32m+[m
[32m+[m[32mul li[m
[32m+[m[32m{[m
[32m+[m[32m    list-style-type: none;[m
[32m+[m[32m}[m
[32m+[m
[32m+[m[32m#symfony-header[m
[32m+[m[32m{[m
[32m+[m[32m    position: relative;[m
[32m+[m[32m    padding: 30px 30px 20px 30px;[m
[32m+[m[32m}[m
[32m+[m
[32m+[m[32m#symfony-wrapper[m
[32m+[m[32m{[m
[32m+[m[32m    width:  970px;[m
[32m+[m[32m    margin: 0 auto;[m
[32m+[m[32m}[m
[32m+[m
[32m+[m[32m#symfony-content[m
[32m+[m[32m{[m
[32m+[m[32m    background-color:           white;[m
[32m+[m[32m    border:                     1px solid #DFDFDF;[m
[32m+[m[32m    padding:                    50px;[m
[32m+[m[32m    -moz-border-radius:         16px;[m
[32m+[m[32m    -webkit-border-radius:      16px;[m
[32m+[m[32m    border-radius:              16px;[m
[32m+[m[32m    margin-bottom:              20px;[m
[32m+[m[32m}[m
[32m+[m
[32m+[m[32m#symfony-header[m
[32m+[m[32m{[m
[32m+[m[32m    position: relative;[m
[32m+[m[32m    padding: 30px 30px 20px 30px;[m
[32m+[m[32m}[m
[32m+[m
[32m+[m[32m#symfony-wrapper[m
[32m+[m[32m{[m
[32m+[m[32m    width:  970px;[m
[32m+[m[32m    margin: 0 auto;[m
[32m+[m[32m}[m
[32m+[m
[32m+[m[32m#symfony-content[m
[32m+[m[32m{[m
[32m+[m[32m    background-color:           white;[m
[32m+[m[32m    border:                     1px solid #DFDFDF;[m
[32m+[m[32m    padding:                    50px;[m
[32m+[m[32m    -moz-border-radius:         16px;[m
[32m+[m[32m    -webkit-border-radius:      16px;[m
[32m+[m[32m    border-radius:              16px;[m
[32m+[m[32m    margin-bottom:              20px;[m
[32m+[m[32m}[m
[32m+[m[32mhtml, body[m
[32m+[m[32m{[m
[32m+[m[32m    background-color: #EFEFEF;[m
[32m+[m[32m}[m
[32m+[m
[32m+[m[32mbody[m
[32m+[m[32m{[m
[32m+[m[32m    font-size:        14px;[m
[32m+[m[32m    font-family:      "Lucida Sans Unicode", "Lucida Grande", Verdana, Arial, Helvetica, sans-serif;[m
[32m+[m[32m    color:            #313131;[m
[32m+[m[32m}[m
[32m+[m
[32m+[m[32ma[m
[32m+[m[32m{[m
[32m+[m[32m    color:           #08C;[m
[32m+[m[32m    text-decoration: none;[m
[32m+[m[32m}[m
[32m+[m
[32m+[m[32ma:hover[m
[32m+[m[32m{[m
[32m+[m[32m    text-decoration: underline;[m
[32m+[m[32m}[m
[32m+[m
[32m+[m[32mstrong[m
[32m+[m[32m{[m
[32m+[m[32m    font-weight: bold;[m
[32m+[m[32m}[m
[32m+[m
[32m+[m[32m#symfony-header[m
[32m+[m[32m{[m
[32m+[m[32m    position: relative;[m
[32m+[m[32m    padding: 30px 30px 20px 30px;[m
[32m+[m[32m}[m
[32m+[m
[32m+[m[32m#symfony-wrapper[m
[32m+[m[32m{[m
[32m+[m[32m    width:  970px;[m
[32m+[m[32m    margin: 0 auto;[m
[32m+[m[32m}[m
[32m+[m
[32m+[m[32m#symfony-content[m
[32m+[m[32m{[m
[32m+[m[32m    background-color:           white;[m
[32m+[m[32m    border:                     1px solid #DFDFDF;[m
[32m+[m[32m    padding:                    50px;[m
[32m+[m[32m    -moz-border-radius:         16px;[m
[32m+[m[32m    -webkit-border-radius:      16px;[m
[32m+[m[32m    border-radius:              16px;[m
[32m+[m[32m    margin-bottom:              20px;[m
[32m+[m[32m}[m
[32m+[m[32mhtml, body[m
[32m+[m[32m{[m
[32m+[m[32m    background-color: #EFEFEF;[m
[32m+[m[32m}[m
[32m+[m
[32m+[m[32mbody[m
[32m+[m[32m{[m
[32m+[m[32m    font-size:        14px;[m
[32m+[m[32m    font-family:      "Lucida Sans Unicode", "Lucida Grande", Verdana, Arial, Helvetica, sans-serif;[m
[32m+[m[32m    color:            #313131;[m
[32m+[m[32m}[m
[32m+[m
[32m+[m[32ma[m
[32m+[m[32m{[m
[32m+[m[32m    color:           #08C;[m
[32m+[m[32m    text-decoration: none;[m
[32m+[m[32m}[m
[32m+[m
[32m+[m[32ma:hover[m
[32m+[m[32m{[m
[32m+[m[32m    text-decoration: underline;[m
[32m+[m[32m}[m
[32m+[m
[32m+[m[32mstrong[m
[32m+[m[32m{[m
[32m+[m[32m    font-weight: bold;[m
[32m+[m[32m}[m
[32m+[m
[32m+[m[32m#symfony-header[m
[32m+[m[32m{[m
[32m+[m[32m    position: relative;[m
[32m+[m[32m    padding: 30px 30px 20px 30px;[m
[32m+[m[32m}[m
[32m+[m
[32m+[m[32m#symfony-wrapper[m
[32m+[m[32m{[m
[32m+[m[32m    width:  970px;[m
[32m+[m[32m    margin: 0 auto;[m
[32m+[m[32m}[m
[32m+[m
[32m+[m[32m#symfony-content[m
[32m+[m[32m{[m
[32m+[m[32m    background-color:           white;[m
[32m+[m[32m    border:                     1px solid #DFDFDF;[m
[32m+[m[32m    padding:                    50px;[m
[32m+[m[32m    -moz-border-radius:         16px;[m
[32m+[m[32m    -webkit-border-radius:      16px;[m
[32m+[m[32m    border-radius:              16px;[m
[32m+[m[32m    margin-bottom:              5px;[m
[32m+[m[32m}[m
[32m+[m
[32m+[m[32m#symfony-search[m
[32m+[m[32m{[m
[32m+[m[32m    position: absolute;[m
[32m+[m
[32m+[m[32m    top:   50px;[m
[32m+[m[32m    right: 30px;[m
[32m+[m[32m}[m
[32m+[m
[32m+[m[32m#symfony-search-field[m
[32m+[m[32m{[m
[32m+[m[32m    width: 190px;[m
[32m+[m[32m}[m
[32m+[m
[32m+[m[32m#symfony-search label[m
[32m+[m[32m{[m
[32m+[m[32m    display: block;[m
[32m+[m[32m    float: left;[m
[32m+[m[32m    width: 20px;[m
[32m+[m[32m    height: 25px;[m
[32m+[m[32m    background: url(../images/search.png) no-repeat left 5px;[m
[32m+[m[32m}[m
[32m+[m
[32m+[m[32m#symfony-search label span[m
[32m+[m[32m{[m
[32m+[m[32m    display: none;[m
[32m+[m[32m}[m
[32m+[m
[32m+[m[32minput[type=text][m
[32m+[m[32m{[m
[32m+[m[32m    border:      1px solid #DADADA;[m
[32m+[m[32m    background:  white url(../images/field-background.gif) repeat-x left top;[m
[32m+[m[32m    padding:     5px 6px;[m
[32m+[m[32m    color:       #565656;[m
[32m+[m[32m    font-family: 'Lucida Sans Unicode', 'Lucida Grande', Verdana, Arial, Helvetica, sans-serif;[m
[32m+[m[32m    font-size:   12px;[m
[32m+[m[32m}[m
[32m+[m
[32m+[m[32m.symfony-button-grey,[m
[32m+[m[32m.symfony-button-green[m
[32m+[m[32m{[m
[32m+[m[32m    font-size: 0.85em;[m
[32m+[m[32m    font-weight: bold;[m
[32m+[m
[32m+[m[32m    cursor: pointer;[m
[32m+[m
[32m+[m[32m    display: inline-block;[m
[32m+[m[32m    outline: none;[m
[32m+[m
[32m+[m[32m    text-align:     center;[m
[32m+[m[32m    text-transform: uppercase;[m
[32m+[m
[32m+[m[32m    padding: 3px 10px;[m
[32m+[m
[32m+[m[32m    text-shadow: 0 1px 1px rgba(0,0,0,.3);[m
[32m+[m
[32m+[m[32m    -webkit-border-radius: 4px;[m
[32m+[m[32m    -moz-border-radius:    4px;[m
[32m+[m[32m    border-radius:         4px;[m
[32m+[m[32m}[m
[32m+[m
[32m+[m[32m.symfony-button-grey[m
[32m+[m[32m{[m
[32m+[m[32m    color:       #868686;[m
[32m+[m[32m    font-weight: normal;[m
[32m+[m
[32m+[m[32m    padding:    5px 10px;[m
[32m+[m[32m    border:     solid 1px #d7d7d7;[m
[32m+[m[32m    background: #ffffff;[m
[32m+[m[32m    background: -webkit-gradient(linear, left top, left bottom, from(#ffffff), to(#d7d7d7));[m
[32m+[m[32m    background: -moz-linear-gradient(top,  #ffffff,  #d7d7d7);[m
[32m+[m[32m    filter:  progid:DXImageTransform.Microsoft.gradient(startColorstr='#ffffff', endColorstr='#d7d7d7');[m
[32m+[m[32m}[m
[32m+[m
[32m+[m[32m.symfony-button-green[m
[32m+[m[32m{[m
[32m+[m[32m    padding: 5px 12px;[m
[32m+[m
[32m+[m[32m    color: white;[m
[32m+[m
[32m+[m[32m    border:     solid 1px #a7da39;[m
[32m+[m[32m    background: #a7da39;[m
[32m+[m[32m    background: -webkit-gradient(linear, left top, left bottom, from(#a7da39), to(#6a9211));[m
[32m+[m[32m    background: -moz-linear-gradient(top,  #a7da39,  #6a9211);[m
[32m+[m[32m    filter:  progid:DXImageTransform.Microsoft.gradient(startColorstr='#a7da39', endColorstr='#6a9211');[m
[32m+[m[32m}[m
[32m+[m
[32m+[m[32m#symfony-wrapper[m
[32m+[m[32m{[m
[32m+[m[32m    padding-top: 50px;[m
[32m+[m[32m}[m
[32m+[m
[32m+[m[32m.symfony-blocks-install[m
[32m+[m[32m{[m
[32m+[m[32m    overflow:hidden;[m
[32m+[m[32m}[m
[32m+[m
[32m+[m[32m.symfony-blocks-install .symfony-block-logo[m
[32m+[m[32m{[m
[32m+[m[32m    float: left;[m
[32m+[m[32m    width: 358px;[m
[32m+[m[32m}[m
[32m+[m
[32m+[m[32m.symfony-blocks-install .symfony-block-content[m
[32m+[m[32m{[m
[32m+[m[32m    float: left;[m
[32m+[m[32m    width: 510px;[m
[32m+[m[32m}[m
[32m+[m
[32m+[m[32m.symfony-install-continue[m
[32m+[m[32m{[m
[32m+[m[32m    font-size:    0.95em;[m
[32m+[m[32m    padding-left: 0;[m
[32m+[m[32m}[m
[32m+[m
[32m+[m[32m.symfony-install-continue li[m
[32m+[m[32m{[m
[32m+[m[32m    padding-bottom: 10px;[m
[32m+[m[32m}[m
[32m+[m
[32m+[m[32m.version[m
[32m+[m[32m{[m
[32m+[m[32m    text-align: right;[m
[32m+[m[32m    font-size: 10px;[m
[32m+[m[32m    margin-right: 20px;[m
[32m+[m[32m}[m
[1mdiff --git a/web/bundles/sensiodistribution/webconfigurator/images/background-textfield.gif b/web/bundles/sensiodistribution/webconfigurator/images/background-textfield.gif[m
[1mnew file mode 100644[m
[1mindex 0000000..7c0efc1[m
Binary files /dev/null and b/web/bundles/sensiodistribution/webconfigurator/images/background-textfield.gif differ
[1mdiff --git a/web/bundles/sensiodistribution/webconfigurator/images/blue-arrow.png b/web/bundles/sensiodistribution/webconfigurator/images/blue-arrow.png[m
[1mnew file mode 100644[m
[1mindex 0000000..fa82d4b[m
Binary files /dev/null and b/web/bundles/sensiodistribution/webconfigurator/images/blue-arrow.png differ
[1mdiff --git a/web/bundles/sensiodistribution/webconfigurator/images/favicon.ico b/web/bundles/sensiodistribution/webconfigurator/images/favicon.ico[m
[1mnew file mode 100644[m
[1mindex 0000000..8648036[m
Binary files /dev/null and b/web/bundles/sensiodistribution/webconfigurator/images/favicon.ico differ
[1mdiff --git a/web/bundles/sensiodistribution/webconfigurator/images/logo-big.gif b/web/bundles/sensiodistribution/webconfigurator/images/logo-big.gif[m
[1mnew file mode 100644[m
[1mindex 0000000..721f12a[m
Binary files /dev/null and b/web/bundles/sensiodistribution/webconfigurator/images/logo-big.gif differ
[1mdiff --git a/web/bundles/sensiodistribution/webconfigurator/images/logo-small.gif b/web/bundles/sensiodistribution/webconfigurator/images/logo-small.gif[m
[1mnew file mode 100644[m
[1mindex 0000000..703cf45[m
Binary files /dev/null and b/web/bundles/sensiodistribution/webconfigurator/images/logo-small.gif differ
[1mdiff --git a/web/bundles/sensiodistribution/webconfigurator/images/notification.gif b/web/bundles/sensiodistribution/webconfigurator/images/notification.gif[m
[1mnew file mode 100644[m
[1mindex 0000000..017fac8[m
Binary files /dev/null and b/web/bundles/sensiodistribution/webconfigurator/images/notification.gif differ
[1mdiff --git a/web/bundles/webprofiler/css/profiler.css b/web/bundles/webprofiler/css/profiler.css[m
[1mnew file mode 100644[m
[1mindex 0000000..834c4f8[m
[1m--- /dev/null[m
[1m+++ b/web/bundles/webprofiler/css/profiler.css[m
[36m@@ -0,0 +1,442 @@[m
[32m+[m[32m/*[m
[32m+[m[32mCopyright (c) 2008, Yahoo! Inc. All rights reserved.[m
[32m+[m[32mCode licensed under the BSD License:[m
[32m+[m[32mhttp://developer.yahoo.net/yui/license.txt[m
[32m+[m[32mversion: 2.6.0[m
[32m+[m[32m*/[m
[32m+[m[32mhtml{color:#000;background:#FFF;}body,div,dl,dt,dd,ul,ol,li,h1,h2,h3,h4,h5,h6,pre,code,form,fieldset,legend,input,button,textarea,p,blockquote,th,td{margin:0;padding:0;}table{border-collapse:collapse;border-spacing:0;}fieldset,img{border:0;}address,caption,cite,code,dfn,em,strong,th,var,optgroup{font-style:inherit;font-weight:inherit;}del,ins{text-decoration:none;}li{list-style:none;}caption,th{text-align:left;}h1,h2,h3,h4,h5,h6{font-size:100%;font-weight:normal;}q:before,q:after{content:'';}abbr,acronym{border:0;font-variant:normal;}sup{vertical-align:baseline;}sub{vertical-align:baseline;}legend{color:#000;}input,button,textarea,select,optgroup,option{font-family:inherit;font-size:inherit;font-style:inherit;font-weight:inherit;}input,button,textarea,select{*font-size:100%;}[m
[32m+[m
[32m+[m[32mhtml, body {[m
[32m+[m[32m    background-color: #efefef;[m
[32m+[m[32m}[m
[32m+[m[32mbody {[m
[32m+[m[32m    font: 1em "Lucida Sans Unicode", "Lucida Grande", Verdana, Arial, Helvetica, sans-serif;[m
[32m+[m[32m    text-align: left;[m
[32m+[m[32m}[m
[32m+[m
[32m+[m[32mp {[m
[32m+[m[32m    font-size: 14px;[m
[32m+[m[32m    line-height: 20px;[m
[32m+[m[32m    color: #313131;[m
[32m+[m[32m    padding-bottom: 20px[m
[32m+[m[32m}[m
[32m+[m
[32m+[m[32mstrong {[m
[32m+[m[32m    color: #313131;[m
[32m+[m[32m    font-weight: bold;[m
[32m+[m[32m}[m
[32m+[m[32mem {[m
[32m+[m[32m    font-style: italic;[m
[32m+[m[32m}[m
[32m+[m
[32m+[m[32ma {[m
[32m+[m[32m    color: #6c6159;[m
[32m+[m[32m}[m
[32m+[m[32ma img {[m
[32m+[m[32m    border: none;[m
[32m+[m[32m}[m
[32m+[m[32ma:hover {[m
[32m+[m[32m    text-decoration: underline;[m
[32m+[m[32m}[m
[32m+[m
[32m+[m[32mbutton::-moz-focus-inner {[m
[32m+[m[32m    padding: 0;[m
[32m+[m[32m    border: none;[m
[32m+[m[32m}[m
[32m+[m[32mbutton {[m
[32m+[m[32m    overflow: visible;[m
[32m+[m[32m    width: auto;[m
[32m+[m[32m    background-color: transparent;[m
[32m+[m[32m    font-weight: bold;[m
[32m+[m[32m}[m
[32m+[m
[32m+[m[32mcaption {[m
[32m+[m[32m    margin-bottom: 7px;[m
[32m+[m[32m}[m
[32m+[m[32mtable, tr, th, td {[m
[32m+[m[32m    border-collapse: collapse;[m
[32m+[m[32m    border: 1px solid #d0dbb3;[m
[32m+[m[32m}[m
[32m+[m[32mtable {[m
[32m+[m[32m    width: 100%;[m
[32m+[m[32m    margin: 10px 0 30px;[m
[32m+[m[32m}[m
[32m+[m[32mtable th {[m
[32m+[m[32m    font-weight: bold;[m
[32m+[m[32m    background-color: #f1f7e2;[m
[32m+[m[32m}[m
[32m+[m[32mtable th, table td {[m
[32m+[m[32m    font-size: 12px;[m
[32m+[m[32m    padding: 8px 10px;[m
[32m+[m[32m}[m
[32m+[m
[32m+[m[32mfieldset {[m
[32m+[m[32m    border: none;[m
[32m+[m[32m}[m
[32m+[m
[32m+[m[32mabbr {[m
[32m+[m[32m    border-bottom: 1px dotted #000;[m
[32m+[m[32m    cursor: help;[m
[32m+[m[32m}[m
[32m+[m
[32m+[m[32m.clear {[m
[32m+[m[32m    clear: both;[m
[32m+[m[32m    height: 0;[m
[32m+[m[32m    font-size: 0;[m
[32m+[m[32m    line-height: 0;[m
[32m+[m[32m}[m
[32m+[m[32m.clear_fix:after[m
[32m+[m[32m{[m
[32m+[m[32m    content: "\0020";[m
[32m+[m[32m    display: block;[m
[32m+[m[32m    height: 0;[m
[32m+[m[32m    clear: both;[m
[32m+[m[32m    visibility: hidden;[m
[32m+[m[32m}[m
[32m+[m[32m* html .clear_fix[m
[32m+[m[32m{[m
[32m+[m[32m    height: 1%;[m
[32m+[m[32m}[m
[32m+[m[32m.clear_fix[m
[32m+[m[32m{[m
[32m+[m[32m    display: block;[m
[32m+[m[32m}[m
[32m+[m
[32m+[m[32m#content {[m
[32m+[m[32m    padding: 0 50px;[m
[32m+[m[32m    margin: 0 auto;[m
[32m+[m[32m    font-family: Arial, Helvetica, sans-serif;[m
[32m+[m[32m    min-width: 970px;[m
[32m+[m[32m}[m
[32m+[m
[32m+[m[32m#header {[m
[32m+[m[32m    padding: 30px 30px 20px;[m
[32m+[m[32m}[m
[32m+[m
[32m+[m[32m#header h1 {[m
[32m+[m[32m    float: left;[m
[32m+[m[32m}[m
[32m+[m
[32m+[m[32m.search {[m
[32m+[m[32m    float: right;[m
[32m+[m[32m}[m
[32m+[m
[32m+[m[32m#menu_profiler {[m
[32m+[m[32m    border-right: 1px solid #dfdfdf;[m
[32m+[m[32m}[m
[32m+[m
[32m+[m[32m#menu_profiler li {[m
[32m+[m[32m    border-bottom: 1px solid #dfdfdf;[m
[32m+[m[32m    position: relative;[m
[32m+[m[32m    padding-bottom: 0;[m
[32m+[m[32m    display: block;[m
[32m+[m[32m    background-color: #f6f6f6;[m
[32m+[m[32m}[m
[32m+[m
[32m+[m[32m#menu_profiler li a {[m
[32m+[m[32m    color: #404040;[m
[32m+[m[32m    display: block;[m
[32m+[m[32m    font-size: 13px;[m
[32m+[m[32m    text-transform: uppercase;[m
[32m+[m[32m    text-decoration: none;[m
[32m+[m[32m    cursor: pointer;[m
[32m+[m[32m}[m
[32m+[m
[32m+[m[32m#menu_profiler li a span.label {[m
[32m+[m[32m    display: block;[m
[32m+[m[32m    padding: 20px 20px 16px 65px;[m
[32m+[m[32m    min-height: 24px;[m
[32m+[m[32m    _height: 24px;[m
[32m+[m[32m}[m
[32m+[m
[32m+[m[32m#menu_profiler li a span.icon {[m
[32m+[m[32m    display: block;[m
[32m+[m[32m    position: absolute;[m
[32m+[m[32m    left: 0;[m
[32m+[m[32m    top: 12px;[m
[32m+[m[32m    width: 60px;[m
[32m+[m[32m    text-align: center;[m
[32m+[m[32m}[m
[32m+[m
[32m+[m[32m#menu_profiler li.selected a,[m
[32m+[m[32m#menu_profiler li a:hover {[m
[32m+[m[32m    background: #d1d1d1 url(../images/profiler/bg_submenu.gif) repeat-x 0 0;[m
[32m+[m[32m}[m
[32m+[m
[32m+[m[32m#navigation div:first-child,[m
[32m+[m[32m#menu_profiler li:first-child,[m
[32m+[m[32m#menu_profiler li:first-child a,[m
[32m+[m[32m#menu_profiler li:first-child a span.label {[m
[32m+[m[32m    -moz-border-radius: 16px 0 0 0;[m
[32m+[m[32m    -webkit-border-radius: 16px 0 0 0;[m
[32m+[m[32m    border-radius: 16px 0 0 0;[m
[32m+[m[32m}[m
[32m+[m
[32m+[m[32m#menu_profiler li a span.count {[m
[32m+[m[32m    padding: 0;[m
[32m+[m[32m    position: absolute;[m
[32m+[m[32m    right: 10px;[m
[32m+[m[32m    top: 20px;[m
[32m+[m[32m}[m
[32m+[m
[32m+[m[32m#collector_wrapper {[m
[32m+[m[32m    float: left;[m
[32m+[m[32m    width: 100%;[m
[32m+[m[32m}[m
[32m+[m
[32m+[m[32m#collector_content {[m
[32m+[m[32m    margin-left: 250px;[m
[32m+[m[32m    padding: 40px 50px;[m
[32m+[m[32m}[m
[32m+[m
[32m+[m[32m#navigation {[m
[32m+[m[32m    float: left;[m
[32m+[m[32m    width: 250px;[m
[32m+[m[32m    margin-left: -100%;[m
[32m+[m[32m}[m
[32m+[m
[32m+[m[32m#collector_content table td {[m
[32m+[m[32m    background-color: white;[m
[32m+[m[32m}[m
[32m+[m
[32m+[m[32mh1 {[m
[32m+[m[32m    font-family: Georgia, "Times New Roman", Times, serif;[m
[32m+[m[32m    color: #404040;[m
[32m+[m[32m}[m
[32m+[m[32mh2, h3 {[m
[32m+[m[32m    font-weight: bold;[m
[32m+[m[32m    margin-bottom: 20px;[m
[32m+[m[32m}[m
[32m+[m
[32m+[m[32mli {[m
[32m+[m[32m    padding-bottom: 10px;[m
[32m+[m
[32m+[m[32m}[m
[32m+[m
[32m+[m[32m#main, #resume {[m
[32m+[m[32m    -moz-border-radius: 16px;[m
[32m+[m[32m    -webkit-border-radius: 16px;[m
[32m+[m[32m    border-radius: 16px;[m
[32m+[m[32m    margin-bottom: 20px;[m
[32m+[m[32m}[m
[32m+[m
[32m+[m[32m#menu_profiler span.count span {[m
[32m+[m[32m    display: inline-block;[m
[32m+[m[32m    background-color: #aacd4e;[m
[32m+[m[32m    -moz-border-radius: 6px;[m
[32m+[m[32m    -webkit-border-radius: 6px;[m
[32m+[m[32m    border-radius: 6px;[m
[32m+[m[32m    padding: 4px;[m
[32m+[m[32m    color: white;[m
[32m+[m[32m    margin-right: 2px;[m
[32m+[m[32m    font-size: 11px;[m
[32m+[m[32m}[m
[32m+[m
[32m+[m[32m#resume {[m
[32m+[m[32m    background-color: #f6f6f6;[m
[32m+[m[32m    border: 1px solid #dfdfdf;[m
[32m+[m[32m    padding: 16px 28px;[m
[32m+[m[32m}[m
[32m+[m
[32m+[m[32m#resume p {[m
[32m+[m[32m    color: #313131;[m
[32m+[m[32m    font-size: 12px;[m
[32m+[m[32m}[m
[32m+[m
[32m+[m[32m#resume .date {[m
[32m+[m[32m    display: block;[m
[32m+[m[32m}[m
[32m+[m
[32m+[m[32mtable th.value {[m
[32m+[m[32m    width: 450px;[m
[32m+[m[32m    background-color: #dfeeb8;[m
[32m+[m[32m}[m
[32m+[m
[32m+[m[32m#content h2 {[m
[32m+[m[32m    font-size: 24px;[m
[32m+[m[32m    color: #313131;[m
[32m+[m[32m    font-weight: bold;[m
[32m+[m[32m}[m
[32m+[m
[32m+[m[32m#content #main {[m
[32m+[m[32m    padding: 0;[m
[32m+[m[32m    background-color: #FFF;[m
[32m+[m[32m    border: 1px solid #dfdfdf;[m
[32m+[m[32m}[m
[32m+[m
[32m+[m[32m#content #main p {[m
[32m+[m[32m    color: #313131;[m
[32m+[m[32m    font-size: 14px;[m
[32m+[m[32m    padding-bottom: 20px;[m
[32m+[m[32m}[m
[32m+[m
[32m+[m[32m.sf-toolbarreset {[m
[32m+[m[32m    border-top: 0;[m
[32m+[m[32m    padding: 0;[m
[32m+[m[32m}[m
[32m+[m
[32m+[m[32m.sf-exceptionreset .block_exception_detected .text_exception {[m
[32m+[m[32m    width: 520px;[m
[32m+[m[32m}[m
[32m+[m
[32m+[m[32m.sf-exceptionreset .block_exception_detected .illustration_exception {[m
[32m+[m[32m    display: none;[m
[32m+[m[32m}[m
[32m+[m
[32m+[m[32mul.alt {[m
[32m+[m[32m    margin: 10px 0 30px;[m
[32m+[m[32m}[m
[32m+[m
[32m+[m[32mul.alt li {[m
[32m+[m[32m    padding: 5px 7px;[m
[32m+[m[32m    font-size: 13px;[m
[32m+[m[32m}[m
[32m+[m
[32m+[m[32mul.alt li.even {[m
[32m+[m[32m    background: #f1f7e2;[m
[32m+[m[32m}[m
[32m+[m
[32m+[m[32mul.alt li.error {[m
[32m+[m[32m    background-color: #f66;[m
[32m+[m[32m    margin-bottom: 1px;[m
[32m+[m[32m}[m
[32m+[m
[32m+[m[32mtd.main, td.menu {[m
[32m+[m[32m    text-align: left;[m
[32m+[m[32m    margin: 0;[m
[32m+[m[32m    padding: 0;[m
[32m+[m[32m    border: 0;[m
[32m+[m[32m    vertical-align: top;[m
[32m+[m[32m}[m
[32m+[m
[32m+[m[32m.search {[m
[32m+[m[32m    padding-top: 20px;[m
[32m+[m[32m}[m
[32m+[m
[32m+[m[32m.search label {[m
[32m+[m[32m    line-height: 28px;[m
[32m+[m[32m    vertical-align: middle;[m
[32m+[m[32m}[m
[32m+[m
[32m+[m[32m.search input {[m
[32m+[m[32m    width: 188px;[m
[32m+[m[32m    margin-right: 10px;[m
[32m+[m[32m    font-size: 12px;[m
[32m+[m[32m    border: 1px solid #dadada;[m
[32m+[m[32m    background: #FFF url(../images/profiler/input_bg.gif) repeat-x left top;[m
[32m+[m[32m    padding: 5px 6px;[m
[32m+[m[32m    color: #565656;[m
[32m+[m[32m}[m
[32m+[m
[32m+[m[32m.search input[type="search"] {[m
[32m+[m[32m    -webkit-appearance: textfield;[m
[32m+[m[32m}[m
[32m+[m
[32m+[m[32m.search button {[m
[32m+[m[32m    -webkit-appearance: button-bevel;[m
[32m+[m[32m    float: none;[m
[32m+[m[32m    padding: 0;[m
[32m+[m[32m    margin: 0;[m
[32m+[m[32m    border: 0;[m
[32m+[m[32m    text-decoration: none;[m
[32m+[m[32m    cursor: pointer;[m
[32m+[m[32m    white-space: nowrap;[m
[32m+[m[32m    display: inline-block;[m
[32m+[m[32m    text-align: center;[m
[32m+[m[32m    vertical-align: middle;[m
[32m+[m[32m    background: none;[m
[32m+[m[32m}[m
[32m+[m
[32m+[m[32m.search button:hover {[m
[32m+[m[32m    text-decoration: none;[m
[32m+[m[32m}[m
[32m+[m
[32m+[m[32m.search button span span,[m
[32m+[m[32m.search button span span span {[m
[32m+[m[32m    position: static;[m
[32m+[m[32m}[m
[32m+[m
[32m+[m[32m.search button span {[m
[32m+[m[32m    position: relative;[m
[32m+[m[32m    text-decoration: none;[m
[32m+[m[32m    display: block;[m
[32m+[m[32m    height: 28px;[m
[32m+[m[32m    float: left;[m
[32m+[m[32m    padding: 0 0 0 8px;[m
[32m+[m[32m    background: transparent url(../images/profiler/border_l.png) no-repeat top left;[m
[32m+[m[32m}[m
[32m+[m
[32m+[m[32m.search button span span {[m
[32m+[m[32m    padding: 0 8px 0 0;[m
[32m+[m[32m    background: transparent url(../images/profiler/border_r.png) right top no-repeat;[m
[32m+[m[32m}[m
[32m+[m
[32m+[m[32m.search button span span span {[m
[32m+[m[32m    padding: 0 7px;[m
[32m+[m[32m    font: bold 11px Arial, Helvetica, sans-serif;[m
[32m+[m[32m    color: #6b6b6b;[m
[32m+[m[32m    line-height: 28px;[m
[32m+[m[32m    background: transparent url(../images/profiler/btn_bg.png) repeat-x top left;[m
[32m+[m[32m}[m
[32m+[m
[32m+[m[32m#navigation div:first-child {[m
[32m+[m[32m    margin: 0 0 20px;[m
[32m+[m[32m    border-top: 0;[m
[32m+[m[32m}[m
[32m+[m
[32m+[m[32m#navigation .search {[m
[32m+[m[32m    padding-top: 15px;[m
[32m+[m[32m    float: none;[m
[32m+[m[32m    background: #f6f6f6;[m
[32m+[m[32m    color: #333;[m
[32m+[m[32m    margin: 20px 0;[m
[32m+[m[32m    border: 1px solid #dfdfdf;[m
[32m+[m[32m    border-left: none;[m
[32m+[m[32m}[m
[32m+[m
[32m+[m[32m#navigation .search h3 {[m
[32m+[m[32m    font-family: Arial, Helvetica, sans-serif;[m
[32m+[m[32m    text-transform: uppercase;[m
[32m+[m[32m    margin-left: 10px;[m
[32m+[m[32m    font-size: 13px;[m
[32m+[m[32m}[m
[32m+[m
[32m+[m[32m#navigation .search form {[m
[32m+[m[32m    padding: 15px 0;[m
[32m+[m[32m}[m
[32m+[m
[32m+[m[32m#navigation .search button {[m
[32m+[m[32m    float: right;[m
[32m+[m[32m    margin-right: 20px;[m
[32m+[m[32m}[m
[32m+[m
[32m+[m[32m#navigation .search label {[m
[32m+[m[32m    display: block;[m
[32m+[m[32m    float: left;[m
[32m+[m[32m    width: 50px;[m
[32m+[m[32m}[m
[32m+[m
[32m+[m[32m#navigation .search input,[m
[32m+[m[32m#navigation .search select,[m
[32m+[m[32m#navigation .search label,[m
[32m+[m[32m#navigation .search a {[m
[32m+[m[32m    font-size: 12px;[m
[32m+[m[32m}[m
[32m+[m
[32m+[m[32m#navigation .search form {[m
[32m+[m[32m    padding-left: 10px;[m
[32m+[m[32m}[m
[32m+[m
[32m+[m[32m#navigation .search input {[m
[32m+[m[32m    width: 160px;[m
[32m+[m[32m}[m
[32m+[m
[32m+[m[32m#navigation .import label {[m
[32m+[m[32m    float: none;[m
[32m+[m[32m    display: inline;[m
[32m+[m[32m}[m
[32m+[m
[32m+[m[32m#navigation .import input {[m
[32m+[m[32m    margin: 5px 0;[m
[32m+[m[32m    width: 210px;[m
[32m+[m[32m}[m
\ No newline at end of file[m
[1mdiff --git a/web/bundles/webprofiler/css/toolbar.css b/web/bundles/webprofiler/css/toolbar.css[m
[1mnew file mode 100644[m
[1mindex 0000000..504e3fe[m
[1m--- /dev/null[m
[1m+++ b/web/bundles/webprofiler/css/toolbar.css[m
[36m@@ -0,0 +1,28 @@[m
[32m+[m[32m/*[m
[32m+[m[32mCopyright (c) 2010, Yahoo! Inc. All rights reserved.[m
[32m+[m[32mCode licensed under the BSD License:[m
[32m+[m[32mhttp://developer.yahoo.com/yui/license.html[m
[32m+[m[32mversion: 3.1.2[m
[32m+[m[32mbuild: 56[m
[32m+[m[32m*/[m
[32m+[m[32m.sf-toolbarreset div,.sf-toolbarreset dl,.sf-toolbarreset dt,.sf-toolbarreset dd,.sf-toolbarreset ul,.sf-toolbarreset ol,.sf-toolbarreset li,.sf-toolbarreset h1,.sf-toolbarreset h2,.sf-toolbarreset h3,.sf-toolbarreset h4,.sf-toolbarreset h5,.sf-toolbarreset h6,.sf-toolbarreset pre,.sf-toolbarreset code,.sf-toolbarreset form,.sf-toolbarreset fieldset,.sf-toolbarreset legend,.sf-toolbarreset input,.sf-toolbarreset textarea,.sf-toolbarreset p,.sf-toolbarreset blockquote,.sf-toolbarreset th,.sf-toolbarreset td{margin:0;padding:0;}.sf-toolbarreset table{border-collapse:collapse;border-spacing:0;}.sf-toolbarreset fieldset,.sf-toolbarreset img{border:0;}.sf-toolbarreset address,.sf-toolbarreset caption,.sf-toolbarreset cite,.sf-toolbarreset code,.sf-toolbarreset dfn,.sf-toolbarreset em,.sf-toolbarreset strong,.sf-toolbarreset th,.sf-toolbarreset var{font-style:normal;font-weight:normal;}.sf-toolbarreset li{list-style:none;}.sf-toolbarreset caption,.sf-toolbarreset th{text-align:left;}.sf-toolbarreset h1,.sf-toolbarreset h2,.sf-toolbarreset h3,.sf-toolbarreset h4,.sf-toolbarreset h5,.sf-toolbarreset h6{font-size:100%;font-weight:normal;}.sf-toolbarreset q:before,.sf-toolbarreset q:after{content:'';}.sf-toolbarreset abbr,.sf-toolbarreset acronym{border:0;font-variant:normal;}.sf-toolbarreset sup{vertical-align:text-top;}.sf-toolbarreset sub{vertical-align:text-bottom;}.sf-toolbarreset input,.sf-toolbarreset textarea,.sf-toolbarreset select{font-family:inherit;font-size:inherit;font-weight:inherit;}.sf-toolbarreset input,.sf-toolbarreset textarea,.sf-toolbarreset select{*font-size:100%;}.sf-toolbarreset legend{color:#000;}[m
[32m+[m
[32m+[m[32m.sf-toolbarreset {[m
[32m+[m[32m    background: #cbcbcb;[m
[32m+[m[32m    background-image: -moz-linear-gradient(-90deg, #e8e8e8, #cbcbcb);[m
[32m+[m[32m    background-image: -webkit-gradient(linear, 0% 0%, 0% 100%, from(#e8e8e8), to(#cbcbcb));[m
[32m+[m[32m    bottom: 0;[m
[32m+[m[32m    left: 0;[m
[32m+[m[32m    z-index: 6000000;[m
[32m+[m[32m    width: 100%;[m
[32m+[m[32m    border-top: 1px solid #bbb;[m
[32m+[m[32m    padding: 5px 0;[m
[32m+[m[32m    margin: 0;[m
[32m+[m[32m    font: 11px Verdana, Arial, sans-serif;[m
[32m+[m[32m    color: #000;[m
[32m+[m[32m}[m
[32m+[m
[32m+[m[32m.sf-toolbarreset abbr {[m
[32m+[m[32m    border-bottom: 1px dotted #000000;[m
[32m+[m[32m    cursor: help;[m
[32m+[m[32m}[m
[1mdiff --git a/web/bundles/webprofiler/favicon.ico b/web/bundles/webprofiler/favicon.ico[m
[1mnew file mode 100644[m
[1mindex 0000000..8648036[m
Binary files /dev/null and b/web/bundles/webprofiler/favicon.ico differ
[1mdiff --git a/web/bundles/webprofiler/images/close.png b/web/bundles/webprofiler/images/close.png[m
[1mnew file mode 100644[m
[1mindex 0000000..f28db61[m
Binary files /dev/null and b/web/bundles/webprofiler/images/close.png differ
[1mdiff --git a/web/bundles/webprofiler/images/config.png b/web/bundles/webprofiler/images/config.png[m
[1mnew file mode 100644[m
[1mindex 0000000..6907b48[m
Binary files /dev/null and b/web/bundles/webprofiler/images/config.png differ
[1mdiff --git a/web/bundles/webprofiler/images/db.png b/web/bundles/webprofiler/images/db.png[m
[1mnew file mode 100644[m
[1mindex 0000000..8bfe151[m
Binary files /dev/null and b/web/bundles/webprofiler/images/db.png differ
[1mdiff --git a/web/bundles/webprofiler/images/events.png b/web/bundles/webprofiler/images/events.png[m
[1mnew file mode 100644[m
[1mindex 0000000..5306afe[m
Binary files /dev/null and b/web/bundles/webprofiler/images/events.png differ
[1mdiff --git a/web/bundles/webprofiler/images/exception.png b/web/bundles/webprofiler/images/exception.png[m
[1mnew file mode 100644[m
[1mindex 0000000..08d5bcb[m
Binary files /dev/null and b/web/bundles/webprofiler/images/exception.png differ
[1mdiff --git a/web/bundles/webprofiler/images/import.png b/web/bundles/webprofiler/images/import.png[m
[1mnew file mode 100644[m
[1mindex 0000000..180584b[m
Binary files /dev/null and b/web/bundles/webprofiler/images/import.png differ
[1mdiff --git a/web/bundles/webprofiler/images/logger.png b/web/bundles/webprofiler/images/logger.png[m
[1mnew file mode 100644[m
[1mindex 0000000..a56e582[m
Binary files /dev/null and b/web/bundles/webprofiler/images/logger.png differ
[1mdiff --git a/web/bundles/webprofiler/images/mail.png b/web/bundles/webprofiler/images/mail.png[m
[1mnew file mode 100644[m
[1mindex 0000000..4e535e7[m
Binary files /dev/null and b/web/bundles/webprofiler/images/mail.png differ
[1mdiff --git a/web/bundles/webprofiler/images/memory.png b/web/bundles/webprofiler/images/memory.png[m
[1mnew file mode 100644[m
[1mindex 0000000..54f2d80[m
Binary files /dev/null and b/web/bundles/webprofiler/images/memory.png differ
[1mdiff --git a/web/bundles/webprofiler/images/profiler/bg_submenu.gif b/web/bundles/webprofiler/images/profiler/bg_submenu.gif[m
[1mnew file mode 100644[m
[1mindex 0000000..fc77660[m
Binary files /dev/null and b/web/bundles/webprofiler/images/profiler/bg_submenu.gif differ
[1mdiff --git a/web/bundles/webprofiler/images/profiler/border_l.png b/web/bundles/webprofiler/images/profiler/border_l.png[m
[1mnew file mode 100644[m
[1mindex 0000000..3d96564[m
Binary files /dev/null and b/web/bundles/webprofiler/images/profiler/border_l.png differ
[1mdiff --git a/web/bundles/webprofiler/images/profiler/border_r.png b/web/bundles/webprofiler/images/profiler/border_r.png[m
[1mnew file mode 100644[m
[1mindex 0000000..3665355[m
Binary files /dev/null and b/web/bundles/webprofiler/images/profiler/border_r.png differ
[1mdiff --git a/web/bundles/webprofiler/images/profiler/btn_bg.png b/web/bundles/webprofiler/images/profiler/btn_bg.png[m
[1mnew file mode 100644[m
[1mindex 0000000..f168bfa[m
Binary files /dev/null and b/web/bundles/webprofiler/images/profiler/btn_bg.png differ
[1mdiff --git a/web/bundles/webprofiler/images/profiler/config.png b/web/bundles/webprofiler/images/profiler/config.png[m
[1mnew file mode 100644[m
[1mindex 0000000..6907b48[m
Binary files /dev/null and b/web/bundles/webprofiler/images/profiler/config.png differ
[1mdiff --git a/web/bundles/webprofiler/images/profiler/db.png b/web/bundles/webprofiler/images/profiler/db.png[m
[1mnew file mode 100644[m
[1mindex 0000000..8c4fc0e[m
Binary files /dev/null and b/web/bundles/webprofiler/images/profiler/db.png differ
[1mdiff --git a/web/bundles/webprofiler/images/profiler/events.png b/web/bundles/webprofiler/images/profiler/events.png[m
[1mnew file mode 100644[m
[1mindex 0000000..c3c4c8a[m
Binary files /dev/null and b/web/bundles/webprofiler/images/profiler/events.png differ
[1mdiff --git a/web/bundles/webprofiler/images/profiler/exception.png b/web/bundles/webprofiler/images/profiler/exception.png[m
[1mnew file mode 100644[m
[1mindex 0000000..ddf5472[m
Binary files /dev/null and b/web/bundles/webprofiler/images/profiler/exception.png differ
[1mdiff --git a/web/bundles/webprofiler/images/profiler/grey_magnifier.png b/web/bundles/webprofiler/images/profiler/grey_magnifier.png[m
[1mnew file mode 100644[m
[1mindex 0000000..3c88b6a[m
Binary files /dev/null and b/web/bundles/webprofiler/images/profiler/grey_magnifier.png differ
[1mdiff --git a/web/bundles/webprofiler/images/profiler/input_bg.gif b/web/bundles/webprofiler/images/profiler/input_bg.gif[m
[1mnew file mode 100644[m
[1mindex 0000000..7c0efc1[m
Binary files /dev/null and b/web/bundles/webprofiler/images/profiler/input_bg.gif differ
[1mdiff --git a/web/bundles/webprofiler/images/profiler/logger.png b/web/bundles/webprofiler/images/profiler/logger.png[m
[1mnew file mode 100644[m
[1mindex 0000000..a399160[m
Binary files /dev/null and b/web/bundles/webprofiler/images/profiler/logger.png differ
[1mdiff --git a/web/bundles/webprofiler/images/profiler/logo_symfony_profiler.gif b/web/bundles/webprofiler/images/profiler/logo_symfony_profiler.gif[m
[1mnew file mode 100644[m
[1mindex 0000000..61d5f94[m
Binary files /dev/null and b/web/bundles/webprofiler/images/profiler/logo_symfony_profiler.gif differ
[1mdiff --git a/web/bundles/webprofiler/images/profiler/mail.png b/web/bundles/webprofiler/images/profiler/mail.png[m
[1mnew file mode 100644[m
[1mindex 0000000..30bcdb1[m
Binary files /dev/null and b/web/bundles/webprofiler/images/profiler/mail.png differ
[1mdiff --git a/web/bundles/webprofiler/images/profiler/request.png b/web/bundles/webprofiler/images/profiler/request.png[m
[1mnew file mode 100644[m
[1mindex 0000000..72ec62d[m
Binary files /dev/null and b/web/bundles/webprofiler/images/profiler/request.png differ
[1mdiff --git a/web/bundles/webprofiler/images/profiler/security.png b/web/bundles/webprofiler/images/profiler/security.png[m
[1mnew file mode 100644[m
[1mindex 0000000..3147d09[m
Binary files /dev/null and b/web/bundles/webprofiler/images/profiler/security.png differ
[1mdiff --git a/web/bundles/webprofiler/images/request.png b/web/bundles/webprofiler/images/request.png[m
[1mnew file mode 100644[m
[1mindex 0000000..4e4fe19[m
Binary files /dev/null and b/web/bundles/webprofiler/images/request.png differ
[1mdiff --git a/web/bundles/webprofiler/images/search.png b/web/bundles/webprofiler/images/search.png[m
[1mnew file mode 100644[m
[1mindex 0000000..03ccf72[m
Binary files /dev/null and b/web/bundles/webprofiler/images/search.png differ
[1mdiff --git a/web/bundles/webprofiler/images/security.png b/web/bundles/webprofiler/images/security.png[m
[1mnew file mode 100644[m
[1mindex 0000000..b0e683b[m
Binary files /dev/null and b/web/bundles/webprofiler/images/security.png differ
[1mdiff --git a/web/bundles/webprofiler/images/spacer.gif b/web/bundles/webprofiler/images/spacer.gif[m
[1mnew file mode 100644[m
[1mindex 0000000..d112d8a[m
Binary files /dev/null and b/web/bundles/webprofiler/images/spacer.gif differ
[1mdiff --git a/web/bundles/webprofiler/images/symfony.png b/web/bundles/webprofiler/images/symfony.png[m
[1mnew file mode 100644[m
[1mindex 0000000..1321f60[m
Binary files /dev/null and b/web/bundles/webprofiler/images/symfony.png differ
[1mdiff --git a/web/bundles/webprofiler/images/timer.png b/web/bundles/webprofiler/images/timer.png[m
[1mnew file mode 100644[m
[1mindex 0000000..7ab04e3[m
Binary files /dev/null and b/web/bundles/webprofiler/images/timer.png differ
[1mdiff --git a/web/config.php b/web/config.php[m
[1mnew file mode 100644[m
[1mindex 0000000..4ad46b9[m
[1m--- /dev/null[m
[1m+++ b/web/config.php[m
[36m@@ -0,0 +1,212 @@[m
[32m+[m[32m<?php[m
[32m+[m
[32m+[m[32mif (!isset($_SERVER['HTTP_HOST'])) {[m
[32m+[m[32m    exit('This script cannot be run from the CLI. Run it from a browser.');[m
[32m+[m[32m}[m
[32m+[m
[32m+[m[32mif (!in_array(@$_SERVER['REMOTE_ADDR'], array([m
[32m+[m[32m    '127.0.0.1',[m
[32m+[m[32m    '::1',[m
[32m+[m[32m))) {[m
[32m+[m[32m    header('HTTP/1.0 403 Forbidden');[m
[32m+[m[32m    exit('This script is only accessible from localhost.');[m
[32m+[m[32m}[m
[32m+[m
[32m+[m[32m$majorProblems = array();[m
[32m+[m[32m$minorProblems = array();[m
[32m+[m[32m$phpini = false;[m
[32m+[m
[32m+[m[32m// minimum[m
[32m+[m[32mif (!version_compare(phpversion(), '5.3.2', '>=')) {[m
[32m+[m[32m    $version = phpversion();[m
[32m+[m[32m    $majorProblems[] = <<<EOF[m
[32m+[m[32m        You are running PHP version "<strong>$version</strong>", but Symfony[m
[32m+[m[32m        needs at least PHP "<strong>5.3.2</strong>" to run. Before using Symfony, install[m
[32m+[m[32m        PHP "<strong>5.3.2</strong>" or newer.[m
[32m+[m[32mEOF;[m
[32m+[m[32m}[m
[32m+[m
[32m+[m[32mif (!is_writable(__DIR__ . '/../app/cache')) {[m
[32m+[m[32m    $majorProblems[] = 'Change the permissions of the "<strong>app/cache/</strong>"[m
[32m+[m[32m        directory so that the web server can write into it.';[m
[32m+[m[32m}[m
[32m+[m
[32m+[m[32mif (!is_writable(__DIR__ . '/../app/logs')) {[m
[32m+[m[32m    $majorProblems[] = 'Change the permissions of the "<strong>app/logs/</strong>"[m
[32m+[m[32m        directory so that the web server can write into it.';[m
[32m+[m[32m}[m
[32m+[m
[32m+[m[32m// extensions[m
[32m+[m[32mif (!class_exists('DomDocument')) {[m
[32m+[m[32m    $minorProblems[] = 'Install and enable the <strong>php-xml</strong> module.';[m
[32m+[m[32m}[m
[32m+[m
[32m+[m[32mif (!((function_exists('apc_store') && ini_get('apc.enabled')) || function_exists('eaccelerator_put') && ini_get('eaccelerator.enable') || function_exists('xcache_set'))) {[m
[32m+[m[32m    $minorProblems[] = 'Install and enable a <strong>PHP accelerator</strong> like APC (highly recommended).';[m
[32m+[m[32m}[m
[32m+[m
[32m+[m[32mif (!(!(function_exists('apc_store') && ini_get('apc.enabled')) || version_compare(phpversion('apc'), '3.0.17', '>='))) {[m
[32m+[m[32m    $majorProblems[] = 'Upgrade your <strong>APC</strong> extension (3.0.17+)';[m
[32m+[m[32m}[m
[32m+[m
[32m+[m[32mif (!function_exists('token_get_all')) {[m
[32m+[m[32m    $minorProblems[] = 'Install and enable the <strong>Tokenizer</strong> extension.';[m
[32m+[m[32m}[m
[32m+[m
[32m+[m[32mif (!function_exists('mb_strlen')) {[m
[32m+[m[32m    $minorProblems[] = 'Install and enable the <strong>mbstring</strong> extension.';[m
[32m+[m[32m}[m
[32m+[m
[32m+[m[32mif (!function_exists('iconv')) {[m
[32m+[m[32m    $minorProblems[] = 'Install and enable the <strong>iconv</strong> extension.';[m
[32m+[m[32m}[m
[32m+[m
[32m+[m[32mif (!function_exists('utf8_decode')) {[m
[32m+[m[32m    $minorProblems[] = 'Install and enable the <strong>XML</strong> extension.';[m
[32m+[m[32m}[m
[32m+[m
[32m+[m[32mif (PHP_OS != 'WINNT' && !function_exists('posix_isatty')) {[m
[32m+[m[32m    $minorProblems[] = 'Install and enable the <strong>php_posix</strong> extension (used to colorize the CLI output).';[m
[32m+[m[32m}[m
[32m+[m
[32m+[m[32mif (!class_exists('Locale')) {[m
[32m+[m[32m    $minorProblems[] = 'Install and enable the <strong>intl</strong> extension.';[m
[32m+[m[32m} else {[m
[32m+[m[32m    $version = '';[m
[32m+[m
[32m+[m[32m    if (defined('INTL_ICU_VERSION')) {[m
[32m+[m[32m        $version =  INTL_ICU_VERSION;[m
[32m+[m[32m    } else {[m
[32m+[m[32m        $reflector = new \ReflectionExtension('intl');[m
[32m+[m
[32m+[m[32m        ob_start();[m
[32m+[m[32m        $reflector->info();[m
[32m+[m[32m        $output = strip_tags(ob_get_clean());[m
[32m+[m
[32m+[m[32m        preg_match('/^ICU version (.*)$/m', $output, $matches);[m
[32m+[m[32m        $version = $matches[1];[m
[32m+[m[32m    }[m
[32m+[m
[32m+[m[32m    if (!version_compare($version, '4.0', '>=')) {[m
[32m+[m[32m        $minorProblems[] = 'Upgrade your <strong>intl</strong> extension with a newer ICU version (4+).';[m
[32m+[m[32m    }[m
[32m+[m[32m}[m
[32m+[m
[32m+[m[32mif (!class_exists('SQLite3') && !in_array('sqlite', PDO::getAvailableDrivers())) {[m
[32m+[m[32m    $majorProblems[] = 'Install and enable the <strong>SQLite3</strong> or <strong>PDO_SQLite</strong> extension.';[m
[32m+[m[32m}[m
[32m+[m
[32m+[m[32mif (!function_exists('json_encode')) {[m
[32m+[m[32m    $majorProblems[] = 'Install and enable the <strong>json</strong> extension.';[m
[32m+[m[32m}[m
[32m+[m
[32m+[m[32mif (!function_exists('session_start')) {[m
[32m+[m[32m    $majorProblems[] = 'Install and enable the <strong>session</strong> extension.';[m
[32m+[m[32m}[m
[32m+[m
[32m+[m[32mif (!function_exists('ctype_alpha')) {[m
[32m+[m[32m    $majorProblems[] = 'Install and enable the <strong>ctype</strong> extension.';[m
[32m+[m[32m}[m
[32m+[m
[32m+[m[32mif (!function_exists('token_get_all')) {[m
[32m+[m[32m    $majorProblems[] = 'Install and enable the <strong>Tokenizer</strong> extension.';[m
[32m+[m[32m}[m
[32m+[m
[32m+[m[32m// php.ini[m
[32m+[m[32mif (!ini_get('date.timezone')) {[m
[32m+[m[32m    $phpini = true;[m
[32m+[m[32m    $majorProblems[] = 'Set the "<strong>date.timezone</strong>" setting in php.ini<a href="#phpini">*</a> (like Europe/Paris).';[m
[32m+[m[32m}[m
[32m+[m
[32m+[m[32mif (ini_get('short_open_tag')) {[m
[32m+[m[32m    $phpini = true;[m
[32m+[m[32m    $minorProblems[] = 'Set <strong>short_open_tag</strong> to <strong>off</strong> in php.ini<a href="#phpini">*</a>.';[m
[32m+[m[32m}[m
[32m+[m
[32m+[m[32mif (ini_get('magic_quotes_gpc')) {[m
[32m+[m[32m    $phpini = true;[m
[32m+[m[32m    $minorProblems[] = 'Set <strong>magic_quotes_gpc</strong> to <strong>off</strong> in php.ini<a href="#phpini">*</a>.';[m
[32m+[m[32m}[m
[32m+[m
[32m+[m[32mif (ini_get('register_globals')) {[m
[32m+[m[32m    $phpini = true;[m
[32m+[m[32m    $minorProblems[] = 'Set <strong>register_globals</strong> to <strong>off</strong> in php.ini<a href="#phpini">*</a>.';[m
[32m+[m[32m}[m
[32m+[m
[32m+[m[32mif (ini_get('session.auto_start')) {[m
[32m+[m[32m    $phpini = true;[m
[32m+[m[32m    $minorProblems[] = 'Set <strong>session.auto_start</strong> to <strong>off</strong> in php.ini<a href="#phpini">*</a>.';[m
[32m+[m[32m}[m
[32m+[m[32m?>[m
[32m+[m[32m<!DOCTYPE html>[m
[32m+[m[32m<html>[m
[32m+[m[32m    <head>[m
[32m+[m[32m        <meta charset="UTF-8" />[m
[32m+[m[32m        <link href="bundles/sensiodistribution/webconfigurator/css/install.css" rel="stylesheet" media="all" />[m
[32m+[m[32m        <title>Symfony Configuration</title>[m
[32m+[m[32m    </head>[m
[32m+[m[32m    <body>[m
[32m+[m[32m        <div id="symfony-wrapper">[m
[32m+[m[32m            <div id="symfony-content">[m
[32m+[m[32m                <div class="symfony-blocks-install">[m
[32m+[m[32m                <div class="symfony-block-logo">[m
[32m+[m[32m                    <img src="bundles/sensiodistribution/webconfigurator/images/logo-big.gif" alt="sf_symfony" />[m
[32m+[m[32m                </div>[m
[32m+[m
[32m+[m[32m                <div class="symfony-block-content">[m
[32m+[m[32m                    <h1>Welcome!</h1>[m
[32m+[m[32m                    <p>Welcome to your new Symfony project.</p>[m
[32m+[m[32m                    <p>This script will guide you through the basic configuration of your project. You can also do the same by editing the ‘<strong>app/config/parameters.ini</strong>’ file directly.</p>[m
[32m+[m
[32m+[m[32m                    <?php if (count($majorProblems)): ?>[m
[32m+[m[32m                        <h2>[m
[32m+[m[32m                            <span><?php echo count($majorProblems) ?> Major problems</span>[m
[32m+[m[32m                        </h2>[m
[32m+[m[32m                        <p>Major problems have been detected and <strong>must</strong> be fixed before continuing :</p>[m
[32m+[m[32m                        <ol>[m
[32m+[m[32m                            <?php foreach ($majorProblems as $problem): ?>[m
[32m+[m[32m                                <li><?php echo $problem; ?></li>[m
[32m+[m[32m                            <?php endforeach ?>[m
[32m+[m[32m                        </ol>[m
[32m+[m[32m                    <?php endif ?>[m
[32m+[m
[32m+[m[32m                    <?php if (count($minorProblems)): ?>[m
[32m+[m[32m                        <h2>Recommendations</h2>[m
[32m+[m[32m                        <p>[m
[32m+[m[32m                            <?php if ($majorProblems): ?>[m
[32m+[m[32m                                Additionally, to[m
[32m+[m[32m                            <?php else: ?>[m
[32m+[m[32m                                To<?php endif; ?>[m
[32m+[m[32m                            enhance your Symfony experience, it’s recommended that you fix the following :[m
[32m+[m[32m                        </p>[m
[32m+[m[32m                        <ol>[m
[32m+[m[32m                            <?php foreach ($minorProblems as $problem): ?>[m
[32m+[m[32m                            <li><?php echo $problem; ?></li>[m
[32m+[m[32m                            <?php endforeach; ?>[m
[32m+[m[32m                        </ol>[m
[32m+[m[32m                    <?php endif ?>[m
[32m+[m
[32m+[m[32m                    <?php if ($phpini): ?>[m
[32m+[m[32m                            <a id="phpini"></a>[m
[32m+[m[32m                            <p>*[m
[32m+[m[32m                                <?php if (get_cfg_var('cfg_file_path')): ?>[m
[32m+[m[32m                                    Changes to the <strong>php.ini</strong> file must be done in "<strong><?php echo get_cfg_var('cfg_file_path') ?></strong>".[m
[32m+[m[32m                                <?php else: ?>[m
[32m+[m[32m                                    To change settings, create a "<strong>php.ini</strong>".[m
[32m+[m[32m                                <?php endif; ?>[m
[32m+[m[32m                            </p>[m
[32m+[m[32m                    <?php endif; ?>[m
[32m+[m
[32m+[m[32m                    <ul class="symfony-install-continue">[m
[32m+[m[32m                        <?php if (!count($majorProblems)): ?>[m
[32m+[m[32m                            <li><a href="app_dev.php/_configurator/">Configure your Symfony Application online</a></li>[m
[32m+[m[32m                            <li><a href="app_dev.php/">Bypass configuration and go to the Welcome page</a></li>[m
[32m+[m[32m                        <?php endif ?>[m
[32m+[m[32m                        <li><a href="config.php">Re-check configuration</a></li>[m
[32m+[m[32m                    </ul>[m
[32m+[m[32m                </div>[m
[32m+[m[32m            </div>[m
[32m+[m[32m        </div>[m
[32m+[m[32m        <div class="version">Symfony Standard Edition</div>[m
[32m+[m[32m    </body>[m
[32m+[m[32m</html>[m
[1mdiff --git a/web/favicon.ico b/web/favicon.ico[m
[1mnew file mode 100644[m
[1mindex 0000000..8648036[m
Binary files /dev/null and b/web/favicon.ico differ
[1mdiff --git a/web/robots.txt b/web/robots.txt[m
[1mnew file mode 100644[m
[1mindex 0000000..214e411[m
[1m--- /dev/null[m
[1m+++ b/web/robots.txt[m
[36m@@ -0,0 +1,4 @@[m
[32m+[m[32m# www.robotstxt.org/[m
[32m+[m[32m# www.google.com/support/webmasters/bin/answer.py?hl=en&answer=156449[m
[32m+[m
[32m+[m[32mUser-agent: *[m
