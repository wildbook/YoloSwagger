#pragma once
#include <json.hpp>
#include <optional>
#include "ClashRewardKeyType.hpp"
#include "ClashRewardConfigEntry.hpp"
namespace leagueapi {
  struct ClashRewardConfigClient_t {
    bool_t grantToSub;
    std::vector<ClashRewardKeyType_t> keyDef;
    std::string_t name;
    std::vector<ClashRewardConfigEntry_t> entries;
  };

  inline void to_json(nlohmann::json& j, const ClashRewardConfigClient_t& v) {
    j["grantToSub"] = v.grantToSub;
    j["keyDef"] = v.keyDef;
    j["name"] = v.name;
    j["entries"] = v.entries;
  }

  inline void from_json(const nlohmann::json& j, ClashRewardConfigClient_t& v) {
    v.grantToSub = j.at("grantToSub").get<bool_t>();
    v.keyDef = j.at("keyDef").get<std::vector<ClashRewardKeyType_t>>();
    v.name = j.at("name").get<std::string_t>();
    v.entries = j.at("entries").get<std::vector<ClashRewardConfigEntry_t>>();
  }
  inline std::string to_string(const ClashRewardConfigClient_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
