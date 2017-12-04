#ifndef SWAGGER_TYPES_LcdsRemovedFromLobbyNotification_HPP
#define SWAGGER_TYPES_LcdsRemovedFromLobbyNotification_HPP
#include <json.hpp>
#include "LcdsRemovalReason.hpp"
namespace leagueapi {
  // 
  struct LcdsRemovedFromLobbyNotification {
    // 
    LcdsRemovalReason removalReason;
  };

  void to_json(nlohmann::json& j, const LcdsRemovedFromLobbyNotification& v) {
    j["removalReason"] = v.removalReason;
  }

  void from_json(const nlohmann::json& j, LcdsRemovedFromLobbyNotification& v) {
    v.removalReason = j.at("removalReason").get<LcdsRemovalReason>;
  }

}
#endif // SWAGGER_TYPES_LcdsRemovedFromLobbyNotification_HPP
