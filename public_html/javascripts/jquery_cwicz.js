$(document).ready(function(){
  $(".wynik").text("Nowa treść");
  console.log($("p").text());
  $("#przycisk").click(function(){
    var vnk = parseInt($("#vnk").val());
    var nk = parseInt($("#nk").val());
    var R = vnk / nk * 100;
    var div2 = '<div class="wspolczynnik">'+R+'</div>';
    $("div.wynik").after(div2);
  });
  $("input").mouseover(function(){
    $(this).addClass("tloBlue");
  });
  $("input").mouseout(function(){
    $(this).removeClass("tloBlue");
  });
  $("#obraz1").dbclick(function(){
    $.(this).hide();
  });
  $("#obraz2").mouseover(function(){
    $.(this).hide();
  });
  $("#obraz3").dbclick(function(){
    $.("#obraz4").hide();
  });
  $("#obraz4").mouseover(function(){
    $.("#obraz3").hide();
  });
  $("#obraz4").mouseout(function(){
    $.("#obraz3").show();
  });
});
