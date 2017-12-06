#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolLobbyTeamBuilderTbLobbySlotResource_t {
    bool autoFillEligible;
    bool autoFillProtectedForPromos;
    bool autoFillProtectedForSoloing;
    bool autoFillProtectedForStreaking;
    std::vector<std::string> draftPositionPreferences;
    std::optional<std::string> excludedPositionPreference;
    bool showPositionExcluder;
    int32_t slotId;
    uint64_t summonerId;
    std::string summonerName;
  };

  inline void to_json(nlohmann::json& j, const LolLobbyTeamBuilderTbLobbySlotResource_t& v) {
    j["autoFillEligible"] = v.autoFillEligible;
    j["autoFillProtectedForPromos"] = v.autoFillProtectedForPromos;
    j["autoFillProtectedForSoloing"] = v.autoFillProtectedForSoloing;
    j["autoFillProtectedForStreaking"] = v.autoFillProtectedForStreaking;
    j["draftPositionPreferences"] = v.draftPositionPreferences;
    if(v.excludedPositionPreference)
      j["excludedPositionPreference"] = *v.excludedPositionPreference;
    j["showPositionExcluder"] = v.showPositionExcluder;
    j["slotId"] = v.slotId;
    j["summonerId"] = v.summonerId;
    j["summonerName"] = v.summonerName;
  }

  inline void from_json(const nlohmann::json& j, LolLobbyTeamBuilderTbLobbySlotResource_t& v) {
    v.autoFillEligible = j.at("autoFillEligible").get<bool>();
    v.autoFillProtectedForPromos = j.at("autoFillProtectedForPromos").get<bool>();
    v.autoFillProtectedForSoloing = j.at("autoFillProtectedForSoloing").get<bool>();
    v.autoFillProtectedForStreaking = j.at("autoFillProtectedForStreaking").get<bool>();
    v.draftPositionPreferences = j.at("draftPositionPreferences").get<std::vector<std::string>>();
    if(auto it = j.find("excludedPositionPreference"); it != j.end() !it->is_null())
      v.excludedPositionPreference = it->get<std::string>();
    v.showPositionExcluder = j.at("showPositionExcluder").get<bool>();
    v.slotId = j.at("slotId").get<int32_t>();
    v.summonerId = j.at("summonerId").get<uint64_t>();
    v.summonerName = j.at("summonerName").get<std::string>();
  }
}
