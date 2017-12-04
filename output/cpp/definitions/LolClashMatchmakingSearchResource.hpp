#ifndef SWAGGER_TYPES_LolClashMatchmakingSearchResource_HPP
#define SWAGGER_TYPES_LolClashMatchmakingSearchResource_HPP
#include <json.hpp>
#include "LolClashMatchmakingDodgeData.hpp"
namespace leagueapi {
  // 
  struct LolClashMatchmakingSearchResource {
    // 
    int32_t queueId;
    // 
    LolClashMatchmakingDodgeData dodgeData;
  };

  inline void to_json(nlohmann::json& j, const LolClashMatchmakingSearchResource& v) {
    j["queueId"] = v.queueId;
    j["dodgeData"] = v.dodgeData;
  }

  inline void from_json(const nlohmann::json& j, LolClashMatchmakingSearchResource& v) {
    v.queueId = j.at("queueId").get<int32_t>;
    v.dodgeData = j.at("dodgeData").get<LolClashMatchmakingDodgeData>;
  }

}
#endif // SWAGGER_TYPES_LolClashMatchmakingSearchResource_HPP
