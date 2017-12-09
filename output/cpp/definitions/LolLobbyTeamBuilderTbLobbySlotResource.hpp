#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolLobbyTeamBuilderTbLobbySlotResource_t {
    bool autoFillEligible;
    bool autoFillProtectedForSoloing;
    uint64_t summonerId;
    bool autoFillProtectedForPromos;
    int32_t slotId;
    std::optional<std::string> excludedPositionPreference;
    bool showPositionExcluder;
    std::string summonerName;
    std::vector<std::string> draftPositionPreferences;
    bool autoFillProtectedForStreaking;
  };

  inline void to_json(nlohmann::json& j, const LolLobbyTeamBuilderTbLobbySlotResource_t& v) {
    j["autoFillEligible"] = v.autoFillEligible;
    j["autoFillProtectedForSoloing"] = v.autoFillProtectedForSoloing;
    j["summonerId"] = v.summonerId;
    j["autoFillProtectedForPromos"] = v.autoFillProtectedForPromos;
    j["slotId"] = v.slotId;
    if(v.excludedPositionPreference)
      j["excludedPositionPreference"] = *v.excludedPositionPreference;
    j["showPositionExcluder"] = v.showPositionExcluder;
    j["summonerName"] = v.summonerName;
    j["draftPositionPreferences"] = v.draftPositionPreferences;
    j["autoFillProtectedForStreaking"] = v.autoFillProtectedForStreaking;
  }

  inline void from_json(const nlohmann::json& j, LolLobbyTeamBuilderTbLobbySlotResource_t& v) {
    v.autoFillEligible = j.at("autoFillEligible").get<bool>();
    v.autoFillProtectedForSoloing = j.at("autoFillProtectedForSoloing").get<bool>();
    v.summonerId = j.at("summonerId").get<uint64_t>();
    v.autoFillProtectedForPromos = j.at("autoFillProtectedForPromos").get<bool>();
    v.slotId = j.at("slotId").get<int32_t>();
    if(auto it = j.find("excludedPositionPreference"); it != j.end() && !it->is_null())
      v.excludedPositionPreference = it->get<std::string>();
    v.showPositionExcluder = j.at("showPositionExcluder").get<bool>();
    v.summonerName = j.at("summonerName").get<std::string>();
    v.draftPositionPreferences = j.at("draftPositionPreferences").get<std::vector<std::string>>();
    v.autoFillProtectedForStreaking = j.at("autoFillProtectedForStreaking").get<bool>();
  }
  inline std::string to_string(const LolLobbyTeamBuilderTbLobbySlotResource_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
