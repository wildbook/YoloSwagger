#ifndef SWAGGER_TYPES_LolLobbyTeamBuilderLobbyMember_HPP
#define SWAGGER_TYPES_LolLobbyTeamBuilderLobbyMember_HPP
#include <json.hpp>
#include "LolLobbyTeamBuilderLobbyPositionPreferences.hpp"
namespace leagueapi {
  // 
  struct LolLobbyTeamBuilderLobbyMember {
    // 
    LolLobbyTeamBuilderLobbyPositionPreferences positionPreferences;
    // 
    bool autoFillProtectedForPromos;
    // 
    bool autoFillEligible;
    // 
    bool autoFillProtectedForStreaking;
    // 
    std::string excludedPositionPreference;
    // 
    bool isOwner;
    // 
    bool canInviteOthers;
    // 
    bool showPositionExcluder;
    // 
    bool autoFillProtectedForSoloing;
    // 
    uint64_t id;
  };

  inline void to_json(nlohmann::json& j, const LolLobbyTeamBuilderLobbyMember& v) {
    j["positionPreferences"] = v.positionPreferences;
    j["autoFillProtectedForPromos"] = v.autoFillProtectedForPromos;
    j["autoFillEligible"] = v.autoFillEligible;
    j["autoFillProtectedForStreaking"] = v.autoFillProtectedForStreaking;
    j["excludedPositionPreference"] = v.excludedPositionPreference;
    j["isOwner"] = v.isOwner;
    j["canInviteOthers"] = v.canInviteOthers;
    j["showPositionExcluder"] = v.showPositionExcluder;
    j["autoFillProtectedForSoloing"] = v.autoFillProtectedForSoloing;
    j["id"] = v.id;
  }

  inline void from_json(const nlohmann::json& j, LolLobbyTeamBuilderLobbyMember& v) {
    v.positionPreferences = j.at("positionPreferences").get<LolLobbyTeamBuilderLobbyPositionPreferences>;
    v.autoFillProtectedForPromos = j.at("autoFillProtectedForPromos").get<bool>;
    v.autoFillEligible = j.at("autoFillEligible").get<bool>;
    v.autoFillProtectedForStreaking = j.at("autoFillProtectedForStreaking").get<bool>;
    v.excludedPositionPreference = j.at("excludedPositionPreference").get<std::string>;
    v.isOwner = j.at("isOwner").get<bool>;
    v.canInviteOthers = j.at("canInviteOthers").get<bool>;
    v.showPositionExcluder = j.at("showPositionExcluder").get<bool>;
    v.autoFillProtectedForSoloing = j.at("autoFillProtectedForSoloing").get<bool>;
    v.id = j.at("id").get<uint64_t>;
  }

}
#endif // SWAGGER_TYPES_LolLobbyTeamBuilderLobbyMember_HPP
