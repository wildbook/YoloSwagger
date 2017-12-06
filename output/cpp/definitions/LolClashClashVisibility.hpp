#pragma once
#include <json.hpp>
namespace leagueapi {
  enum class LolClashClashVisibility_t {
    Hidden_E = 0,
    Visible_E = 2,
    DarkVisible_E = 1,
  };

  inline void to_json(nlohmann::json& j, const LolClashClashVisibility_t& v) {
    switch(v) {
      case LolClashClashVisibility_t::Hidden_E:
        j = "Hidden";
      break;
      case LolClashClashVisibility_t::Visible_E:
        j = "Visible";
      break;
      case LolClashClashVisibility_t::DarkVisible_E:
        j = "DarkVisible";
      break;
    }
  }

  inline void from_json(const nlohmann::json& j, LolClashClashVisibility_t& v) {
    const auto& s = j.get<std::string>();
    if(s == "Hidden"){
      v = LolClashClashVisibility_t::Hidden_E;
      return;
    }
    if(s == "Visible"){
      v = LolClashClashVisibility_t::Visible_E;
      return;
    }
    if(s == "DarkVisible"){
      v = LolClashClashVisibility_t::DarkVisible_E;
      return;
    }
  }
}
