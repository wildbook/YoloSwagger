#pragma once
#include <json.hpp>
namespace leagueapi {
  enum class PatcherComponentResourceHistory_t {
    none_E = 0,
    keep_E = 1,
  };

  inline void to_json(nlohmann::json& j, const PatcherComponentResourceHistory_t& v) {
    switch(v) {
      case PatcherComponentResourceHistory_t::none_E:
        j = "none";
      break;
      case PatcherComponentResourceHistory_t::keep_E:
        j = "keep";
      break;
    }
  }

  inline void from_json(const nlohmann::json& j, PatcherComponentResourceHistory_t& v) {
    const auto& s = j.get<std::string>();
    if(s == "none"){
      v = PatcherComponentResourceHistory_t::none_E;
      return;
    }
    if(s == "keep"){
      v = PatcherComponentResourceHistory_t::keep_E;
      return;
    }
  }
  inline std::string to_string(const PatcherComponentResourceHistory_t& v) {
    switch(v) {
      case PatcherComponentResourceHistory_t::none_E:
        return "none";
      case PatcherComponentResourceHistory_t::keep_E:
        return "keep";
    }
  }

}
