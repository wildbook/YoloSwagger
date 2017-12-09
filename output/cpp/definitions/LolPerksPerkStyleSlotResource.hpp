#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolPerksPerkStyleSlotResource_t {
    std::string type;
    std::string slotLabel;
    std::vector<int32_t> perks;
  };

  inline void to_json(nlohmann::json& j, const LolPerksPerkStyleSlotResource_t& v) {
    j["type"] = v.type;
    j["slotLabel"] = v.slotLabel;
    j["perks"] = v.perks;
  }

  inline void from_json(const nlohmann::json& j, LolPerksPerkStyleSlotResource_t& v) {
    v.type = j.at("type").get<std::string>();
    v.slotLabel = j.at("slotLabel").get<std::string>();
    v.perks = j.at("perks").get<std::vector<int32_t>>();
  }
  inline std::string to_string(const LolPerksPerkStyleSlotResource_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
