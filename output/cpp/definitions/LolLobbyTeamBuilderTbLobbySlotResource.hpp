#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolLobbyTeamBuilderTbLobbySlotResource_t {
    bool showPositionExcluder;
    bool autoFillEligible;
    bool autoFillProtectedForStreaking;
    std::optional<std::string> excludedPositionPreference;
    std::vector<std::string> draftPositionPreferences;
    bool autoFillProtectedForSoloing;
    int32_t slotId;
    uint64_t summonerId;
    std::string summonerName;
    bool autoFillProtectedForPromos;
  };

  inline void to_json(nlohmann::json& j, const LolLobbyTeamBuilderTbLobbySlotResource_t& v) {
    j["showPositionExcluder"] = v.showPositionExcluder;
    j["autoFillEligible"] = v.autoFillEligible;
    j["autoFillProtectedForStreaking"] = v.autoFillProtectedForStreaking;
    if(v.excludedPositionPreference)
      j["excludedPositionPreference"] = *v.excludedPositionPreference;
    j["draftPositionPreferences"] = v.draftPositionPreferences;
    j["autoFillProtectedForSoloing"] = v.autoFillProtectedForSoloing;
    j["slotId"] = v.slotId;
    j["summonerId"] = v.summonerId;
    j["summonerName"] = v.summonerName;
    j["autoFillProtectedForPromos"] = v.autoFillProtectedForPromos;
  }

  inline void from_json(const nlohmann::json& j, LolLobbyTeamBuilderTbLobbySlotResource_t& v) {
    v.showPositionExcluder = j.at("showPositionExcluder").get<bool>();
    v.autoFillEligible = j.at("autoFillEligible").get<bool>();
    v.autoFillProtectedForStreaking = j.at("autoFillProtectedForStreaking").get<bool>();
    if(auto it = j.find("excludedPositionPreference"); it != j.end() !it->is_null())
      v.excludedPositionPreference = it->get<std::string>();
    v.draftPositionPreferences = j.at("draftPositionPreferences").get<std::vector<std::string>>();
    v.autoFillProtectedForSoloing = j.at("autoFillProtectedForSoloing").get<bool>();
    v.slotId = j.at("slotId").get<int32_t>();
    v.summonerId = j.at("summonerId").get<uint64_t>();
    v.summonerName = j.at("summonerName").get<std::string>();
    v.autoFillProtectedForPromos = j.at("autoFillProtectedForPromos").get<bool>();
  }
}
