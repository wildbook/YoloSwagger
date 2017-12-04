#ifndef SWAGGER_TYPES_LolLobbyTeamBuilderLobbyMember_HPP
#define SWAGGER_TYPES_LolLobbyTeamBuilderLobbyMember_HPP
#include <json.hpp>
#include "LolLobbyTeamBuilderLobbyPositionPreferences.hpp"
namespace test {
  // 
  struct LolLobbyTeamBuilderLobbyMember {
'    // 
    bool autoFillEligible;
    // 
    bool autoFillProtectedForPromos;
    // 
    bool autoFillProtectedForSoloing;
    // 
    bool autoFillProtectedForStreaking;
    // 
    bool canInviteOthers;
    // 
    std::string excludedPositionPreference;
    // 
    uint64_t id;
    // 
    bool isOwner;
    // 
    LolLobbyTeamBuilderLobbyPositionPreferences positionPreferences;
    // 
    bool showPositionExcluder;
  };

  void to_json(nlohmann::json& j, const LolLobbyTeamBuilderLobbyMember& v) {
    j["autoFillEligible"] = v.autoFillEligible;
    j["autoFillProtectedForPromos"] = v.autoFillProtectedForPromos;
    j["autoFillProtectedForSoloing"] = v.autoFillProtectedForSoloing;
    j["autoFillProtectedForStreaking"] = v.autoFillProtectedForStreaking;
    j["canInviteOthers"] = v.canInviteOthers;
    j["excludedPositionPreference"] = v.excludedPositionPreference;
    j["id"] = v.id;
    j["isOwner"] = v.isOwner;
    j["positionPreferences"] = v.positionPreferences;
    j["showPositionExcluder"] = v.showPositionExcluder;
  }

  void from_json(const nlohmann::json& j, LolLobbyTeamBuilderLobbyMember& v) {
    v.autoFillEligible = j.at("autoFillEligible").get<bool>;
    v.autoFillProtectedForPromos = j.at("autoFillProtectedForPromos").get<bool>;
    v.autoFillProtectedForSoloing = j.at("autoFillProtectedForSoloing").get<bool>;
    v.autoFillProtectedForStreaking = j.at("autoFillProtectedForStreaking").get<bool>;
    v.canInviteOthers = j.at("canInviteOthers").get<bool>;
    v.excludedPositionPreference = j.at("excludedPositionPreference").get<std::string>;
    v.id = j.at("id").get<uint64_t>;
    v.isOwner = j.at("isOwner").get<bool>;
    v.positionPreferences = j.at("positionPreferences").get<LolLobbyTeamBuilderLobbyPositionPreferences>;
    v.showPositionExcluder = j.at("showPositionExcluder").get<bool>;
  }

}
#endif // SWAGGER_TYPES_LolLobbyTeamBuilderLobbyMember_HPP
