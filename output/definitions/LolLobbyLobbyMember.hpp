#ifndef SWAGGER_TYPES_LolLobbyLobbyMember_HPP
#define SWAGGER_TYPES_LolLobbyLobbyMember_HPP
#include <json.hpp>
#include "LolLobbyLobbyBotDifficulty.hpp"
#include "LolLobbyLobbyPositionPreferences.hpp"
namespace leagueapi {
  // 
  struct LolLobbyLobbyMember {
    // 
    bool autoFillEligible;
    // 
    bool autoFillProtectedForPromos;
    // 
    bool autoFillProtectedForSoloing;
    // 
    bool autoFillProtectedForStreaking;
    // 
    int32_t botChampionId;
    // 
    LolLobbyLobbyBotDifficulty botDifficulty;
    // 
    bool canInviteOthers;
    // 
    std::string excludedPositionPreference;
    // 
    uint64_t id;
    // 
    bool isBot;
    // 
    bool isOwner;
    // 
    bool isSpectator;
    // 
    LolLobbyLobbyPositionPreferences positionPreferences;
    // 
    bool showPositionExcluder;
    // 
    std::string summonerInternalName;
  };

  void to_json(nlohmann::json& j, const LolLobbyLobbyMember& v) {
    j["autoFillEligible"] = v.autoFillEligible;
    j["autoFillProtectedForPromos"] = v.autoFillProtectedForPromos;
    j["autoFillProtectedForSoloing"] = v.autoFillProtectedForSoloing;
    j["autoFillProtectedForStreaking"] = v.autoFillProtectedForStreaking;
    j["botChampionId"] = v.botChampionId;
    j["botDifficulty"] = v.botDifficulty;
    j["canInviteOthers"] = v.canInviteOthers;
    j["excludedPositionPreference"] = v.excludedPositionPreference;
    j["id"] = v.id;
    j["isBot"] = v.isBot;
    j["isOwner"] = v.isOwner;
    j["isSpectator"] = v.isSpectator;
    j["positionPreferences"] = v.positionPreferences;
    j["showPositionExcluder"] = v.showPositionExcluder;
    j["summonerInternalName"] = v.summonerInternalName;
  }

  void from_json(const nlohmann::json& j, LolLobbyLobbyMember& v) {
    v.autoFillEligible = j.at("autoFillEligible").get<bool>;
    v.autoFillProtectedForPromos = j.at("autoFillProtectedForPromos").get<bool>;
    v.autoFillProtectedForSoloing = j.at("autoFillProtectedForSoloing").get<bool>;
    v.autoFillProtectedForStreaking = j.at("autoFillProtectedForStreaking").get<bool>;
    v.botChampionId = j.at("botChampionId").get<int32_t>;
    v.botDifficulty = j.at("botDifficulty").get<LolLobbyLobbyBotDifficulty>;
    v.canInviteOthers = j.at("canInviteOthers").get<bool>;
    v.excludedPositionPreference = j.at("excludedPositionPreference").get<std::string>;
    v.id = j.at("id").get<uint64_t>;
    v.isBot = j.at("isBot").get<bool>;
    v.isOwner = j.at("isOwner").get<bool>;
    v.isSpectator = j.at("isSpectator").get<bool>;
    v.positionPreferences = j.at("positionPreferences").get<LolLobbyLobbyPositionPreferences>;
    v.showPositionExcluder = j.at("showPositionExcluder").get<bool>;
    v.summonerInternalName = j.at("summonerInternalName").get<std::string>;
  }

}
#endif // SWAGGER_TYPES_LolLobbyLobbyMember_HPP
