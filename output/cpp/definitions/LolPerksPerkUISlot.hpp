#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolPerksPerkUISlot_t {
    std::vector<int32_t> perks;
    std::string_t type;
    std::string_t slotLabel;
  };

  inline void to_json(nlohmann::json& j, const LolPerksPerkUISlot_t& v) {
    j["perks"] = v.perks;
    j["type"] = v.type;
    j["slotLabel"] = v.slotLabel;
  }

  inline void from_json(const nlohmann::json& j, LolPerksPerkUISlot_t& v) {
    v.perks = j.at("perks").get<std::vector<int32_t>>();
    v.type = j.at("type").get<std::string_t>();
    v.slotLabel = j.at("slotLabel").get<std::string_t>();
  }
  inline std::string to_string(const LolPerksPerkUISlot_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
