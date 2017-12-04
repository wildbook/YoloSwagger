#ifndef SWAGGER_TYPES_ClashRewardConfigClient_HPP
#define SWAGGER_TYPES_ClashRewardConfigClient_HPP
#include <json.hpp>
#include "ClashRewardKeyType.hpp"
#include "ClashRewardConfigEntry.hpp"
namespace leagueapi {
  // 
  struct ClashRewardConfigClient {
    // 
    std::vector<ClashRewardConfigEntry> entries;
    // 
    bool grantToSub;
    // 
    std::vector<ClashRewardKeyType> keyDef;
    // 
    std::string name;
  };

  void to_json(nlohmann::json& j, const ClashRewardConfigClient& v) {
    j["entries"] = v.entries;
    j["grantToSub"] = v.grantToSub;
    j["keyDef"] = v.keyDef;
    j["name"] = v.name;
  }

  void from_json(const nlohmann::json& j, ClashRewardConfigClient& v) {
    v.entries = j.at("entries").get<std::vector<ClashRewardConfigEntry>>;
    v.grantToSub = j.at("grantToSub").get<bool>;
    v.keyDef = j.at("keyDef").get<std::vector<ClashRewardKeyType>>;
    v.name = j.at("name").get<std::string>;
  }

}
#endif // SWAGGER_TYPES_ClashRewardConfigClient_HPP
