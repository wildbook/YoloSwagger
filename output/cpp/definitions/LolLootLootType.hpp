#pragma once
#include <json.hpp>
namespace leagueapi {
  enum class LolLootLootType_t {
    Chest_E = 0,
    Currency_E = 1,
  };

  inline void to_json(nlohmann::json& j, const LolLootLootType_t& v) {
    switch(v) {
      case LolLootLootType_t::Chest_E:
        j = "Chest";
      break;
      case LolLootLootType_t::Currency_E:
        j = "Currency";
      break;
    }
  }

  inline void from_json(const nlohmann::json& j, LolLootLootType_t& v) {
    const auto& s = j.get<std::string>();
    if(s == "Chest"){
      v = LolLootLootType_t::Chest_E;
      return;
    }
    if(s == "Currency"){
      v = LolLootLootType_t::Currency_E;
      return;
    }
  }
  inline std::string to_string(const LolLootLootType_t& v) {
    switch(v) {
      case LolLootLootType_t::Chest_E:
        return "Chest";
      case LolLootLootType_t::Currency_E:
        return "Currency";
    }
  }

}
