#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolItemSetsPreferredItemSlot_t {
    int16_t preferredItemSlot;
    std::string id;
  };

  inline void to_json(nlohmann::json& j, const LolItemSetsPreferredItemSlot_t& v) {
    j["preferredItemSlot"] = v.preferredItemSlot;
    j["id"] = v.id;
  }

  inline void from_json(const nlohmann::json& j, LolItemSetsPreferredItemSlot_t& v) {
    v.preferredItemSlot = j.at("preferredItemSlot").get<int16_t>();
    v.id = j.at("id").get<std::string>();
  }
  inline std::string to_string(const LolItemSetsPreferredItemSlot_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
