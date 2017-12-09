#pragma once
#include <json.hpp>
#include <optional>
#include "LolLobbyLobbyPositionPreferences.hpp"
#include "LolLobbyLobbyBotDifficulty.hpp"
namespace leagueapi {
  struct LolLobbyLobbyMember_t {
    std::optional<std::string> excludedPositionPreference;
    int32_t botChampionId;
    bool isSpectator;
    bool autoFillProtectedForPromos;
    LolLobbyLobbyBotDifficulty_t botDifficulty;
    bool isBot;
    bool showPositionExcluder;
    bool autoFillProtectedForStreaking;
    bool autoFillEligible;
    std::string summonerInternalName;
    uint64_t id;
    bool canInviteOthers;
    bool autoFillProtectedForSoloing;
    LolLobbyLobbyPositionPreferences_t positionPreferences;
    bool isOwner;
  };

  inline void to_json(nlohmann::json& j, const LolLobbyLobbyMember_t& v) {
    if(v.excludedPositionPreference)
      j["excludedPositionPreference"] = *v.excludedPositionPreference;
    j["botChampionId"] = v.botChampionId;
    j["isSpectator"] = v.isSpectator;
    j["autoFillProtectedForPromos"] = v.autoFillProtectedForPromos;
    j["botDifficulty"] = v.botDifficulty;
    j["isBot"] = v.isBot;
    j["showPositionExcluder"] = v.showPositionExcluder;
    j["autoFillProtectedForStreaking"] = v.autoFillProtectedForStreaking;
    j["autoFillEligible"] = v.autoFillEligible;
    j["summonerInternalName"] = v.summonerInternalName;
    j["id"] = v.id;
    j["canInviteOthers"] = v.canInviteOthers;
    j["autoFillProtectedForSoloing"] = v.autoFillProtectedForSoloing;
    j["positionPreferences"] = v.positionPreferences;
    j["isOwner"] = v.isOwner;
  }

  inline void from_json(const nlohmann::json& j, LolLobbyLobbyMember_t& v) {
    if(auto it = j.find("excludedPositionPreference"); it != j.end() && !it->is_null())
      v.excludedPositionPreference = it->get<std::string>();
    v.botChampionId = j.at("botChampionId").get<int32_t>();
    v.isSpectator = j.at("isSpectator").get<bool>();
    v.autoFillProtectedForPromos = j.at("autoFillProtectedForPromos").get<bool>();
    v.botDifficulty = j.at("botDifficulty").get<LolLobbyLobbyBotDifficulty_t>();
    v.isBot = j.at("isBot").get<bool>();
    v.showPositionExcluder = j.at("showPositionExcluder").get<bool>();
    v.autoFillProtectedForStreaking = j.at("autoFillProtectedForStreaking").get<bool>();
    v.autoFillEligible = j.at("autoFillEligible").get<bool>();
    v.summonerInternalName = j.at("summonerInternalName").get<std::string>();
    v.id = j.at("id").get<uint64_t>();
    v.canInviteOthers = j.at("canInviteOthers").get<bool>();
    v.autoFillProtectedForSoloing = j.at("autoFillProtectedForSoloing").get<bool>();
    v.positionPreferences = j.at("positionPreferences").get<LolLobbyLobbyPositionPreferences_t>();
    v.isOwner = j.at("isOwner").get<bool>();
  }
  inline std::string to_string(const LolLobbyLobbyMember_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
