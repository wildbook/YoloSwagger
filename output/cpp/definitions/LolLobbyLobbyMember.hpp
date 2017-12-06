#pragma once
#include <json.hpp>
#include <optional>
#include "LolLobbyLobbyPositionPreferences.hpp"
#include "LolLobbyLobbyBotDifficulty.hpp"
namespace leagueapi {
  struct LolLobbyLobbyMember_t {
    std::string summonerInternalName;
    bool isOwner;
    bool autoFillProtectedForStreaking;
    std::optional<std::string> excludedPositionPreference;
    bool autoFillProtectedForSoloing;
    LolLobbyLobbyPositionPreferences_t positionPreferences;
    bool autoFillProtectedForPromos;
    bool isSpectator;
    LolLobbyLobbyBotDifficulty_t botDifficulty;
    uint64_t id;
    bool autoFillEligible;
    bool showPositionExcluder;
    bool isBot;
    bool canInviteOthers;
    int32_t botChampionId;
  };

  inline void to_json(nlohmann::json& j, const LolLobbyLobbyMember_t& v) {
    j["summonerInternalName"] = v.summonerInternalName;
    j["isOwner"] = v.isOwner;
    j["autoFillProtectedForStreaking"] = v.autoFillProtectedForStreaking;
    if(v.excludedPositionPreference)
      j["excludedPositionPreference"] = *v.excludedPositionPreference;
    j["autoFillProtectedForSoloing"] = v.autoFillProtectedForSoloing;
    j["positionPreferences"] = v.positionPreferences;
    j["autoFillProtectedForPromos"] = v.autoFillProtectedForPromos;
    j["isSpectator"] = v.isSpectator;
    j["botDifficulty"] = v.botDifficulty;
    j["id"] = v.id;
    j["autoFillEligible"] = v.autoFillEligible;
    j["showPositionExcluder"] = v.showPositionExcluder;
    j["isBot"] = v.isBot;
    j["canInviteOthers"] = v.canInviteOthers;
    j["botChampionId"] = v.botChampionId;
  }

  inline void from_json(const nlohmann::json& j, LolLobbyLobbyMember_t& v) {
    v.summonerInternalName = j.at("summonerInternalName").get<std::string>();
    v.isOwner = j.at("isOwner").get<bool>();
    v.autoFillProtectedForStreaking = j.at("autoFillProtectedForStreaking").get<bool>();
    if(auto it = j.find("excludedPositionPreference"); it != j.end() !it->is_null())
      v.excludedPositionPreference = it->get<std::string>();
    v.autoFillProtectedForSoloing = j.at("autoFillProtectedForSoloing").get<bool>();
    v.positionPreferences = j.at("positionPreferences").get<LolLobbyLobbyPositionPreferences_t>();
    v.autoFillProtectedForPromos = j.at("autoFillProtectedForPromos").get<bool>();
    v.isSpectator = j.at("isSpectator").get<bool>();
    v.botDifficulty = j.at("botDifficulty").get<LolLobbyLobbyBotDifficulty_t>();
    v.id = j.at("id").get<uint64_t>();
    v.autoFillEligible = j.at("autoFillEligible").get<bool>();
    v.showPositionExcluder = j.at("showPositionExcluder").get<bool>();
    v.isBot = j.at("isBot").get<bool>();
    v.canInviteOthers = j.at("canInviteOthers").get<bool>();
    v.botChampionId = j.at("botChampionId").get<int32_t>();
  }
}
