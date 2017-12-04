#ifndef SWAGGER_TYPES_LolLobbyLobbyMember_HPP
#define SWAGGER_TYPES_LolLobbyLobbyMember_HPP
#include <json.hpp>
#include "LolLobbyLobbyBotDifficulty.hpp"
#include "LolLobbyLobbyPositionPreferences.hpp"
namespace leagueapi {
  // 
  struct LolLobbyLobbyMember {
    // 
    std::string summonerInternalName;
    // 
    LolLobbyLobbyPositionPreferences positionPreferences;
    // 
    bool autoFillProtectedForPromos;
    // 
    bool autoFillEligible;
    // 
    int32_t botChampionId;
    // 
    bool isOwner;
    // 
    std::string excludedPositionPreference;
    // 
    bool showPositionExcluder;
    // 
    bool isBot;
    // 
    bool canInviteOthers;
    // 
    bool autoFillProtectedForStreaking;
    // 
    LolLobbyLobbyBotDifficulty botDifficulty;
    // 
    bool autoFillProtectedForSoloing;
    // 
    bool isSpectator;
    // 
    uint64_t id;
  };

  inline void to_json(nlohmann::json& j, const LolLobbyLobbyMember& v) {
    j["summonerInternalName"] = v.summonerInternalName;
    j["positionPreferences"] = v.positionPreferences;
    j["autoFillProtectedForPromos"] = v.autoFillProtectedForPromos;
    j["autoFillEligible"] = v.autoFillEligible;
    j["botChampionId"] = v.botChampionId;
    j["isOwner"] = v.isOwner;
    j["excludedPositionPreference"] = v.excludedPositionPreference;
    j["showPositionExcluder"] = v.showPositionExcluder;
    j["isBot"] = v.isBot;
    j["canInviteOthers"] = v.canInviteOthers;
    j["autoFillProtectedForStreaking"] = v.autoFillProtectedForStreaking;
    j["botDifficulty"] = v.botDifficulty;
    j["autoFillProtectedForSoloing"] = v.autoFillProtectedForSoloing;
    j["isSpectator"] = v.isSpectator;
    j["id"] = v.id;
  }

  inline void from_json(const nlohmann::json& j, LolLobbyLobbyMember& v) {
    v.summonerInternalName = j.at("summonerInternalName").get<std::string>;
    v.positionPreferences = j.at("positionPreferences").get<LolLobbyLobbyPositionPreferences>;
    v.autoFillProtectedForPromos = j.at("autoFillProtectedForPromos").get<bool>;
    v.autoFillEligible = j.at("autoFillEligible").get<bool>;
    v.botChampionId = j.at("botChampionId").get<int32_t>;
    v.isOwner = j.at("isOwner").get<bool>;
    v.excludedPositionPreference = j.at("excludedPositionPreference").get<std::string>;
    v.showPositionExcluder = j.at("showPositionExcluder").get<bool>;
    v.isBot = j.at("isBot").get<bool>;
    v.canInviteOthers = j.at("canInviteOthers").get<bool>;
    v.autoFillProtectedForStreaking = j.at("autoFillProtectedForStreaking").get<bool>;
    v.botDifficulty = j.at("botDifficulty").get<LolLobbyLobbyBotDifficulty>;
    v.autoFillProtectedForSoloing = j.at("autoFillProtectedForSoloing").get<bool>;
    v.isSpectator = j.at("isSpectator").get<bool>;
    v.id = j.at("id").get<uint64_t>;
  }

}
#endif // SWAGGER_TYPES_LolLobbyLobbyMember_HPP
