<head>
<meta charset="UTF-8">
</head> 
<table id="result">
   <thead>
       <tr>
           <th>Número</th>
           <th>Departamento</th>
           <th>Responsável</th>
       </tr>
   </thead>
   <tbody></tbody>
</table>
<script src="http://code.jquery.com/jquery-2.1.4.min.js"></script>
<script type="text/javascript">
$(document).ready(function() {
   var url = "https://spreadsheets.google.com/feeds/list/1EgWApw5QZLbSW6B-19zJ8zzuYtOgrCCKY6iWf5aCg_A/od6/public/values?alt=json";
   $.getJSON(url, function (data) {
       var model = "<tr>"+
                       "<td>{número}</td>"+
                       "<td>{departamento}</td>"+
                       "<td>{responsável}</td>"+
                   "</tr>";
       if (data.feed.entry == null) {
           // faça seu tratamento de nulidade aqui
       } else {
 
           $.each(data.feed.entry, function (index, value) {
               line = model;
               line = line.replace("{número}", value.gsx$número.$t);
               line = line.replace("{departamento}", value.gsx$departamento.$t);
               line = line.replace("{responsável}", value.gsx$responsável.$t);
               $("#result > tbody:last").append(line);
           });
       }
   });
})
</script>
