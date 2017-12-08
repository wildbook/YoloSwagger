#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolItemSetsPreferredItemSlot_t {
    std::string id;
    int16_t preferredItemSlot;
  };

  inline void to_json(nlohmann::json& j, const LolItemSetsPreferredItemSlot_t& v) {
    j["id"] = v.id;
    j["preferredItemSlot"] = v.preferredItemSlot;
  }

  inline void from_json(const nlohmann::json& j, LolItemSetsPreferredItemSlot_t& v) {
    v.id = j.at("id").get<std::string>();
    v.preferredItemSlot = j.at("preferredItemSlot").get<int16_t>();
  }
  inline std::string to_string(const LolItemSetsPreferredItemSlot_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
