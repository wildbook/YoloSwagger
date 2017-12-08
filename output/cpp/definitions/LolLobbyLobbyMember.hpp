#pragma once
#include <json.hpp>
#include <optional>
#include "LolLobbyLobbyPositionPreferences.hpp"
#include "LolLobbyLobbyBotDifficulty.hpp"
namespace leagueapi {
  struct LolLobbyLobbyMember_t {
    int32_t botChampionId;
    bool showPositionExcluder;
    bool autoFillProtectedForSoloing;
    bool autoFillEligible;
    bool isSpectator;
    std::string summonerInternalName;
    bool isOwner;
    LolLobbyLobbyPositionPreferences_t positionPreferences;
    uint64_t id;
    bool autoFillProtectedForStreaking;
    bool canInviteOthers;
    bool autoFillProtectedForPromos;
    std::optional<std::string> excludedPositionPreference;
    bool isBot;
    LolLobbyLobbyBotDifficulty_t botDifficulty;
  };

  inline void to_json(nlohmann::json& j, const LolLobbyLobbyMember_t& v) {
    j["botChampionId"] = v.botChampionId;
    j["showPositionExcluder"] = v.showPositionExcluder;
    j["autoFillProtectedForSoloing"] = v.autoFillProtectedForSoloing;
    j["autoFillEligible"] = v.autoFillEligible;
    j["isSpectator"] = v.isSpectator;
    j["summonerInternalName"] = v.summonerInternalName;
    j["isOwner"] = v.isOwner;
    j["positionPreferences"] = v.positionPreferences;
    j["id"] = v.id;
    j["autoFillProtectedForStreaking"] = v.autoFillProtectedForStreaking;
    j["canInviteOthers"] = v.canInviteOthers;
    j["autoFillProtectedForPromos"] = v.autoFillProtectedForPromos;
    if(v.excludedPositionPreference)
      j["excludedPositionPreference"] = *v.excludedPositionPreference;
    j["isBot"] = v.isBot;
    j["botDifficulty"] = v.botDifficulty;
  }

  inline void from_json(const nlohmann::json& j, LolLobbyLobbyMember_t& v) {
    v.botChampionId = j.at("botChampionId").get<int32_t>();
    v.showPositionExcluder = j.at("showPositionExcluder").get<bool>();
    v.autoFillProtectedForSoloing = j.at("autoFillProtectedForSoloing").get<bool>();
    v.autoFillEligible = j.at("autoFillEligible").get<bool>();
    v.isSpectator = j.at("isSpectator").get<bool>();
    v.summonerInternalName = j.at("summonerInternalName").get<std::string>();
    v.isOwner = j.at("isOwner").get<bool>();
    v.positionPreferences = j.at("positionPreferences").get<LolLobbyLobbyPositionPreferences_t>();
    v.id = j.at("id").get<uint64_t>();
    v.autoFillProtectedForStreaking = j.at("autoFillProtectedForStreaking").get<bool>();
    v.canInviteOthers = j.at("canInviteOthers").get<bool>();
    v.autoFillProtectedForPromos = j.at("autoFillProtectedForPromos").get<bool>();
    if(auto it = j.find("excludedPositionPreference"); it != j.end() && !it->is_null())
      v.excludedPositionPreference = it->get<std::string>();
    v.isBot = j.at("isBot").get<bool>();
    v.botDifficulty = j.at("botDifficulty").get<LolLobbyLobbyBotDifficulty_t>();
  }
  inline std::string to_string(const LolLobbyLobbyMember_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
