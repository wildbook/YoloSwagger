#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolPerksPerkStyleSlotResource_t {
    std::string type;
    std::vector<int32_t> perks;
    std::string slotLabel;
  };

  inline void to_json(nlohmann::json& j, const LolPerksPerkStyleSlotResource_t& v) {
    j["type"] = v.type;
    j["perks"] = v.perks;
    j["slotLabel"] = v.slotLabel;
  }

  inline void from_json(const nlohmann::json& j, LolPerksPerkStyleSlotResource_t& v) {
    v.type = j.at("type").get<std::string>();
    v.perks = j.at("perks").get<std::vector<int32_t>>();
    v.slotLabel = j.at("slotLabel").get<std::string>();
  }
  inline std::string to_string(const LolPerksPerkStyleSlotResource_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
