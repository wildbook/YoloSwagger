#pragma once
#include <json.hpp>
#include <optional>
#include "LolLobbyLobbyBotDifficulty.hpp"
#include "LolLobbyLobbyPositionPreferences.hpp"
namespace leagueapi {
  struct LolLobbyLobbyMember_t {
    bool isOwner;
    bool autoFillProtectedForPromos;
    std::optional<std::string> excludedPositionPreference;
    bool canInviteOthers;
    uint64_t id;
    bool showPositionExcluder;
    bool isSpectator;
    LolLobbyLobbyBotDifficulty_t botDifficulty;
    LolLobbyLobbyPositionPreferences_t positionPreferences;
    bool isBot;
    bool autoFillProtectedForStreaking;
    bool autoFillEligible;
    int32_t botChampionId;
    std::string summonerInternalName;
    bool autoFillProtectedForSoloing;
  };

  inline void to_json(nlohmann::json& j, const LolLobbyLobbyMember_t& v) {
    j["isOwner"] = v.isOwner;
    j["autoFillProtectedForPromos"] = v.autoFillProtectedForPromos;
    if(v.excludedPositionPreference)
      j["excludedPositionPreference"] = *v.excludedPositionPreference;
    j["canInviteOthers"] = v.canInviteOthers;
    j["id"] = v.id;
    j["showPositionExcluder"] = v.showPositionExcluder;
    j["isSpectator"] = v.isSpectator;
    j["botDifficulty"] = v.botDifficulty;
    j["positionPreferences"] = v.positionPreferences;
    j["isBot"] = v.isBot;
    j["autoFillProtectedForStreaking"] = v.autoFillProtectedForStreaking;
    j["autoFillEligible"] = v.autoFillEligible;
    j["botChampionId"] = v.botChampionId;
    j["summonerInternalName"] = v.summonerInternalName;
    j["autoFillProtectedForSoloing"] = v.autoFillProtectedForSoloing;
  }

  inline void from_json(const nlohmann::json& j, LolLobbyLobbyMember_t& v) {
    v.isOwner = j.at("isOwner").get<bool>();
    v.autoFillProtectedForPromos = j.at("autoFillProtectedForPromos").get<bool>();
    if(auto it = j.find("excludedPositionPreference"); it != j.end() && !it->is_null())
      v.excludedPositionPreference = it->get<std::string>();
    v.canInviteOthers = j.at("canInviteOthers").get<bool>();
    v.id = j.at("id").get<uint64_t>();
    v.showPositionExcluder = j.at("showPositionExcluder").get<bool>();
    v.isSpectator = j.at("isSpectator").get<bool>();
    v.botDifficulty = j.at("botDifficulty").get<LolLobbyLobbyBotDifficulty_t>();
    v.positionPreferences = j.at("positionPreferences").get<LolLobbyLobbyPositionPreferences_t>();
    v.isBot = j.at("isBot").get<bool>();
    v.autoFillProtectedForStreaking = j.at("autoFillProtectedForStreaking").get<bool>();
    v.autoFillEligible = j.at("autoFillEligible").get<bool>();
    v.botChampionId = j.at("botChampionId").get<int32_t>();
    v.summonerInternalName = j.at("summonerInternalName").get<std::string>();
    v.autoFillProtectedForSoloing = j.at("autoFillProtectedForSoloing").get<bool>();
  }
  inline std::string to_string(const LolLobbyLobbyMember_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
