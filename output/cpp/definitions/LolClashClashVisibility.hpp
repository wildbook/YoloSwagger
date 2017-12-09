#pragma once
#include <json.hpp>
namespace leagueapi {
  enum class LolClashClashVisibility_t {
    Visible_E = 2,
    Hidden_E = 0,
    DarkVisible_E = 1,
  };

  inline void to_json(nlohmann::json& j, const LolClashClashVisibility_t& v) {
    switch(v) {
      case LolClashClashVisibility_t::Visible_E:
        j = "Visible";
      break;
      case LolClashClashVisibility_t::Hidden_E:
        j = "Hidden";
      break;
      case LolClashClashVisibility_t::DarkVisible_E:
        j = "DarkVisible";
      break;
    }
  }

  inline void from_json(const nlohmann::json& j, LolClashClashVisibility_t& v) {
    const auto& s = j.get<std::string>();
    if(s == "Visible"){
      v = LolClashClashVisibility_t::Visible_E;
      return;
    }
    if(s == "Hidden"){
      v = LolClashClashVisibility_t::Hidden_E;
      return;
    }
    if(s == "DarkVisible"){
      v = LolClashClashVisibility_t::DarkVisible_E;
      return;
    }
  }
  inline std::string to_string(const LolClashClashVisibility_t& v) {
    switch(v) {
      case LolClashClashVisibility_t::Visible_E:
        return "Visible";
      case LolClashClashVisibility_t::Hidden_E:
        return "Hidden";
      case LolClashClashVisibility_t::DarkVisible_E:
        return "DarkVisible";
    }
  }

}
