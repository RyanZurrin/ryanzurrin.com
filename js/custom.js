(function (a) {
  a(document).ready(function () {
    a(".slide").prepend('<div class="patternOverlay"></div>');
    a(".skillbar").each(function () {
      a(this)
        .find(".skillbar-bar")
        .animate({ width: a(this).attr("data-percent") }, 6e3);
    });
    a(".skillbar").each(function () {
      a(this)
        .find(".skill-bar-percent")
        .animate({ left: a(this).attr("data-percent") }, 6e3);
    });
    a(".skillbar").each(function () {
      a(this).find(".skill-bar-percent").text(a(this).attr("data-percent"));
    });
    767 < a(window).width() &&
      (a(".navbar-wrapper").animate({ opacity: 0 }, 200),
      a(".navbar-wrapper").addClass("default-menu"));
    a("#nav-show").click(function (b) {
      b.preventDefault();
      a(".wrapper").removeClass("noGap");
      a(".navbar-wrapper").animate({ opacity: 1 }, 200);
      a(".navbar-wrapper").removeClass("default-menu");
      a(this).fadeOut();
    });
    a(".closeMenu").click(function (b) {
      b.preventDefault();
      a(".navbar-wrapper").animate({ opacity: 0 }, 50, function () {
        a(".navbar-wrapper").addClass("default-menu");
      });
      a("#nav-show").fadeIn();
    });
  });
  a(window).load(function () {
    a("#status").fadeOut();
    a("#preloader").delay(350).fadeOut("slow");
  });
  a(window).load(function () {
    a("button.navbar-toggle").click(function () {
      a(this).toggleClass("active");
      a(".navbar-collapse").slideToggle();
    });
  });
  a(window).width();
  var c = a(window).height();
  a(".banner").css({ height: c });
  a(window).load(function () {
    var b = a(".portfolioContainer");
    b.isotope({
      filter: "*",
      animationOptions: { duration: 750, easing: "linear", queue: !1 },
    });
    a(".portfolioFilter a").click(function () {
      a(".portfolioFilter .current").removeClass("current");
      a(this).addClass("current");
      var c = a(this).attr("data-filter");
      b.isotope({
        filter: c,
        animationOptions: { duration: 750, easing: "linear", queue: !1 },
      });
      return !1;
    });
    jQuery(function () {
      a("a[id^=theme-]");
      a(".lb").rlightbox();
      a(".lb_title-overwritten").rlightbox({ overwriteTitle: !0 });
    });
  });
  a(function () {
    a("a[href*=#]:not([href=#])").click(function () {
      if (
        location.pathname.replace(/^\//, "") ==
          this.pathname.replace(/^\//, "") &&
        location.hostname == this.hostname
      ) {
        var b = a(this.hash);
        b = b.length ? b : a("[name=" + this.hash.slice(1) + "]");
        if (b.length)
          return (
            a("html,body").animate({ scrollTop: b.offset().top - 16 }, 1e3), !1
          );
      }
    });
  });
})(jQuery);
