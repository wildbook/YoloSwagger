#ifndef SWAGGER_TYPES_LolClashClashVisibility_HPP
#define SWAGGER_TYPES_LolClashClashVisibility_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  enum class LolClashClashVisibility {
    // 
    DarkVisible = 1,
    // 
    Hidden = 0,
    // 
    Visible = 2,
  };

  void to_json(nlohmann::json& j, const LolClashClashVisibility& v) {
    switch(v) {
      case LolClashClashVisibility::DarkVisible:
        j = "DarkVisible";
      break;
      case LolClashClashVisibility::Hidden:
        j = "Hidden";
      break;
      case LolClashClashVisibility::Visible:
        j = "Visible";
      break;
    }
  }

  void from_json(const nlohmann::json& j, LolClashClashVisibility& v) {
    const auto s& = j.get<std::string>();
    if(s == "DarkVisible"){
      v = LolClashClashVisibility::DarkVisible;
      return;
    }
    if(s == "Hidden"){
      v = LolClashClashVisibility::Hidden;
      return;
    }
    if(s == "Visible"){
      v = LolClashClashVisibility::Visible;
      return;
    }
  }

}
#endif // SWAGGER_TYPES_LolClashClashVisibility_HPP
