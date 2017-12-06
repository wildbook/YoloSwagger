#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolPerksPerkStyleSlotResource_t {
    std::vector<int32_t> perks;
    std::string slotLabel;
    std::string type;
  };

  inline void to_json(nlohmann::json& j, const LolPerksPerkStyleSlotResource_t& v) {
    j["perks"] = v.perks;
    j["slotLabel"] = v.slotLabel;
    j["type"] = v.type;
  }

  inline void from_json(const nlohmann::json& j, LolPerksPerkStyleSlotResource_t& v) {
    v.perks = j.at("perks").get<std::vector<int32_t>>();
    v.slotLabel = j.at("slotLabel").get<std::string>();
    v.type = j.at("type").get<std::string>();
  }
}
