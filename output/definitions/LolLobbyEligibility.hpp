#ifndef SWAGGER_TYPES_LolLobbyEligibility_HPP
#define SWAGGER_TYPES_LolLobbyEligibility_HPP
#include <json.hpp>
#include "LolLobbyEligibilityRestriction.hpp"
namespace leagueapi {
  // 
  struct LolLobbyEligibility {
    // 
    bool eligible;
    // 
    int32_t queueId;
    // 
    std::vector<LolLobbyEligibilityRestriction> restrictions;
  };

  void to_json(nlohmann::json& j, const LolLobbyEligibility& v) {
    j["eligible"] = v.eligible;
    j["queueId"] = v.queueId;
    j["restrictions"] = v.restrictions;
  }

  void from_json(const nlohmann::json& j, LolLobbyEligibility& v) {
    v.eligible = j.at("eligible").get<bool>;
    v.queueId = j.at("queueId").get<int32_t>;
    v.restrictions = j.at("restrictions").get<std::vector<LolLobbyEligibilityRestriction>>;
  }

}
#endif // SWAGGER_TYPES_LolLobbyEligibility_HPP