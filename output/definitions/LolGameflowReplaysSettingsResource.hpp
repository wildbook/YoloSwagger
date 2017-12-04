#ifndef SWAGGER_TYPES_LolGameflowReplaysSettingsResource_HPP
#define SWAGGER_TYPES_LolGameflowReplaysSettingsResource_HPP
#include <json.hpp>
#include "LolGameflowReplaysSettingsData.hpp"
namespace leagueapi {
  // 
  struct LolGameflowReplaysSettingsResource {
    // 
    LolGameflowReplaysSettingsData data;
  };

  void to_json(nlohmann::json& j, const LolGameflowReplaysSettingsResource& v) {
    j["data"] = v.data;
  }

  void from_json(const nlohmann::json& j, LolGameflowReplaysSettingsResource& v) {
    v.data = j.at("data").get<LolGameflowReplaysSettingsData>;
  }

}
#endif // SWAGGER_TYPES_LolGameflowReplaysSettingsResource_HPP
