#ifndef SWAGGER_TYPES_LolReplaysReplaysSettingsResource_HPP
#define SWAGGER_TYPES_LolReplaysReplaysSettingsResource_HPP
#include <json.hpp>
#include "LolReplaysReplaysSettingsData.hpp"
namespace leagueapi {
  // 
  struct LolReplaysReplaysSettingsResource {
    // 
    LolReplaysReplaysSettingsData data;
  };

  inline void to_json(nlohmann::json& j, const LolReplaysReplaysSettingsResource& v) {
    j["data"] = v.data;
  }

  inline void from_json(const nlohmann::json& j, LolReplaysReplaysSettingsResource& v) {
    v.data = j.at("data").get<LolReplaysReplaysSettingsData>;
  }

}
#endif // SWAGGER_TYPES_LolReplaysReplaysSettingsResource_HPP
