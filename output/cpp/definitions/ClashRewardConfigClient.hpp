#pragma once
#include <json.hpp>
#include <optional>
#include "ClashRewardKeyType.hpp"
#include "ClashRewardConfigEntry.hpp"
namespace leagueapi {
  struct ClashRewardConfigClient_t {
    std::string name;
    bool grantToSub;
    std::vector<ClashRewardKeyType_t> keyDef;
    std::vector<ClashRewardConfigEntry_t> entries;
  };

  inline void to_json(nlohmann::json& j, const ClashRewardConfigClient_t& v) {
    j["name"] = v.name;
    j["grantToSub"] = v.grantToSub;
    j["keyDef"] = v.keyDef;
    j["entries"] = v.entries;
  }

  inline void from_json(const nlohmann::json& j, ClashRewardConfigClient_t& v) {
    v.name = j.at("name").get<std::string>();
    v.grantToSub = j.at("grantToSub").get<bool>();
    v.keyDef = j.at("keyDef").get<std::vector<ClashRewardKeyType_t>>();
    v.entries = j.at("entries").get<std::vector<ClashRewardConfigEntry_t>>();
  }
}
