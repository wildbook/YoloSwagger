#pragma once
#include <json.hpp>
#include <optional>
#include "LolLobbyLobbyPositionPreferences.hpp"
#include "LolLobbyLobbyBotDifficulty.hpp"
namespace leagueapi {
  struct LolLobbyLobbyMember_t {
    bool autoFillEligible;
    bool autoFillProtectedForPromos;
    bool autoFillProtectedForSoloing;
    bool autoFillProtectedForStreaking;
    int32_t botChampionId;
    LolLobbyLobbyBotDifficulty_t botDifficulty;
    bool canInviteOthers;
    std::optional<std::string> excludedPositionPreference;
    uint64_t id;
    bool isBot;
    bool isOwner;
    bool isSpectator;
    LolLobbyLobbyPositionPreferences_t positionPreferences;
    bool showPositionExcluder;
    std::string summonerInternalName;
  };

  inline void to_json(nlohmann::json& j, const LolLobbyLobbyMember_t& v) {
    j["autoFillEligible"] = v.autoFillEligible;
    j["autoFillProtectedForPromos"] = v.autoFillProtectedForPromos;
    j["autoFillProtectedForSoloing"] = v.autoFillProtectedForSoloing;
    j["autoFillProtectedForStreaking"] = v.autoFillProtectedForStreaking;
    j["botChampionId"] = v.botChampionId;
    j["botDifficulty"] = v.botDifficulty;
    j["canInviteOthers"] = v.canInviteOthers;
    if(v.excludedPositionPreference)
      j["excludedPositionPreference"] = *v.excludedPositionPreference;
    j["id"] = v.id;
    j["isBot"] = v.isBot;
    j["isOwner"] = v.isOwner;
    j["isSpectator"] = v.isSpectator;
    j["positionPreferences"] = v.positionPreferences;
    j["showPositionExcluder"] = v.showPositionExcluder;
    j["summonerInternalName"] = v.summonerInternalName;
  }

  inline void from_json(const nlohmann::json& j, LolLobbyLobbyMember_t& v) {
    v.autoFillEligible = j.at("autoFillEligible").get<bool>();
    v.autoFillProtectedForPromos = j.at("autoFillProtectedForPromos").get<bool>();
    v.autoFillProtectedForSoloing = j.at("autoFillProtectedForSoloing").get<bool>();
    v.autoFillProtectedForStreaking = j.at("autoFillProtectedForStreaking").get<bool>();
    v.botChampionId = j.at("botChampionId").get<int32_t>();
    v.botDifficulty = j.at("botDifficulty").get<LolLobbyLobbyBotDifficulty_t>();
    v.canInviteOthers = j.at("canInviteOthers").get<bool>();
    if(auto it = j.find("excludedPositionPreference"); it != j.end() !it->is_null())
      v.excludedPositionPreference = it->get<std::string>();
    v.id = j.at("id").get<uint64_t>();
    v.isBot = j.at("isBot").get<bool>();
    v.isOwner = j.at("isOwner").get<bool>();
    v.isSpectator = j.at("isSpectator").get<bool>();
    v.positionPreferences = j.at("positionPreferences").get<LolLobbyLobbyPositionPreferences_t>();
    v.showPositionExcluder = j.at("showPositionExcluder").get<bool>();
    v.summonerInternalName = j.at("summonerInternalName").get<std::string>();
  }
}
