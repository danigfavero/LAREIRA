Elemento quadro;
quadro.nome = "quadro";
//quadro.artigos
quadro.longa = "Um quadro escrito ALGUMA COISA ESCAPA AO NAUFRÁGIO DAS ILUSÕES\n";
quadro.curta = "um quadro";
quadro.ativo = True;
quadro.visivel = True;
quadro.conhecido = False;
quadro.conteudo = Lcria();
quadro.acoes = malloc(sizeof(fptr));
quadro.acoes[0] = Examinar;

Elemento sala1;
sala1.nome = "inicio";
//artigos?
sala1.longa = "É uma sala claustrofóbica e pouco iluminada."
"Tudo o que existem são quatro portas ao seu redor, uma em cada parede.\n"
""
"com letras trêmulas. É preciso ir pra algum lugar.";
puts(sala1.longa);
sala1.curta = "Esta é a sala inicial, aquela na qual você acordou.";
sala1.ativo = True;
sala1.visivel = True;
sala1.conhecido = False;
sala1.conteudo = Lcria();
sala1.def.lugar.saidas[0] = &sala4;
sala1.def.lugar.saidas[1] = &sala4;
sala1.def.lugar.saidas[2] = &sala2;
sala1.def.lugar.saidas[3] = &sala3;
Linsere((sala1.conteudo), &quadro);

Elemento sala2;
sala2.nome = "audição";
//artigos?
sala2.longa = "Nessa sala toca uma  música";
puts(sala1.longa);
sala2.curta = "Esta é a sala inicial, aquela na qual você acordou.";
sala2.ativo = True;
sala1.visivel = True;
sala1.conhecido = False;
sala1.conteudo = Lcria();
sala2.def.lugar.saidas[0] = &sala5;
sala2.def.lugar.saidas[1] = &sala5;
sala2.def.lugar.saidas[2] = &sala3;
sala2.def.lugar.saidas[3] = &sala1;
Linsere((sala1.conteudo), &quadro);

Elemento sala1;
sala1.nome = "inicio";
//artigos?
sala1.longa = "É uma sala claustrofóbica e pouco iluminada."
"Tudo o que existem são quatro portas ao seu redor, uma em cada parede.\n"
""
"com letras trêmulas. É preciso ir pra algum lugar.";
puts(sala1.longa);
sala1.curta = "Esta é a sala inicial, aquela na qual você acordou.";
sala1.ativo = True;
sala1.visivel = True;
sala1.conhecido = False;
sala1.conteudo = Lcria();
sala3.def.lugar.saidas[0] = &sala6;
sala3.def.lugar.saidas[1] = &sala6;
sala3.def.lugar.saidas[2] = &sala1;
sala3.def.lugar.saidas[3] = &sala2;
Linsere((sala1.conteudo), &quadro);

Elemento sala1;
sala1.nome = "inicio";
//artigos?
sala1.longa = "É uma sala claustrofóbica e pouco iluminada."
"Tudo o que existem são quatro portas ao seu redor, uma em cada parede.\n"
""
"com letras trêmulas. É preciso ir pra algum lugar.";
puts(sala1.longa);
sala1.curta = "Esta é a sala inicial, aquela na qual você acordou.";
sala1.ativo = True;
sala1.visivel = True;
sala1.conhecido = False;
sala1.conteudo = Lcria();
sala4.def.lugar.saidas[0] = &sala1;
sala4.def.lugar.saidas[1] = &sala1;
sala4.def.lugar.saidas[2] = &sala5;
sala4.def.lugar.saidas[3] = &sala6;
Linsere((sala1.conteudo), &quadro);

Elemento sala1;
sala1.nome = "inicio";
//artigos?
sala1.longa = "É uma sala claustrofóbica e pouco iluminada."
"Tudo o que existem são quatro portas ao seu redor, uma em cada parede.\n"
""
"com letras trêmulas. É preciso ir pra algum lugar.";
puts(sala1.longa);
sala1.curta = "Esta é a sala inicial, aquela na qual você acordou.";
sala1.ativo = True;
sala1.visivel = True;
sala1.conhecido = False;
sala1.conteudo = Lcria();
sala5.def.lugar.saidas[0] = &sala2;
sala5.def.lugar.saidas[1] = &sala2;
sala5.def.lugar.saidas[2] = &sala6;
sala5.def.lugar.saidas[3] = &sala4;
Linsere((sala1.conteudo), &quadro);

Elemento sala1;
sala1.nome = "inicio";
//artigos?
sala1.longa = "É uma sala claustrofóbica e pouco iluminada."
"Tudo o que existem são quatro portas ao seu redor, uma em cada parede. É preciso ir pra algum lugar.";
puts(sala1.longa);
sala1.curta = "Esta é a sala inicial, aquela na qual você acordou.";
sala1.ativo = True;
sala1.visivel = True;
sala1.conhecido = False;
sala1.conteudo = Lcria();
sala6.def.lugar.saidas[0] = &sala3;
sala6.def.lugar.saidas[1] = &sala3;
sala6.def.lugar.saidas[2] = &sala4;
sala6.def.lugar.saidas[3] = &sala5;
Linsere((sala1.conteudo), &quadro);
