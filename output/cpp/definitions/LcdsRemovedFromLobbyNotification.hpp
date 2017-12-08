#pragma once
#include <json.hpp>
#include <optional>
#include "LcdsRemovalReason.hpp"
namespace leagueapi {
  struct LcdsRemovedFromLobbyNotification_t {
    LcdsRemovalReason_t removalReason;
  };

  inline void to_json(nlohmann::json& j, const LcdsRemovedFromLobbyNotification_t& v) {
    j["removalReason"] = v.removalReason;
  }

  inline void from_json(const nlohmann::json& j, LcdsRemovedFromLobbyNotification_t& v) {
    v.removalReason = j.at("removalReason").get<LcdsRemovalReason_t>();
  }
  inline std::string to_string(const LcdsRemovedFromLobbyNotification_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
