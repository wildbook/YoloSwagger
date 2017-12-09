#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolLobbyTeamBuilderTbLobbySlotResource_t {
    int32_t slotId;
    bool autoFillProtectedForPromos;
    bool autoFillProtectedForStreaking;
    bool autoFillEligible;
    uint64_t summonerId;
    std::string summonerName;
    bool autoFillProtectedForSoloing;
    std::vector<std::string> draftPositionPreferences;
    bool showPositionExcluder;
    std::optional<std::string> excludedPositionPreference;
  };

  inline void to_json(nlohmann::json& j, const LolLobbyTeamBuilderTbLobbySlotResource_t& v) {
    j["slotId"] = v.slotId;
    j["autoFillProtectedForPromos"] = v.autoFillProtectedForPromos;
    j["autoFillProtectedForStreaking"] = v.autoFillProtectedForStreaking;
    j["autoFillEligible"] = v.autoFillEligible;
    j["summonerId"] = v.summonerId;
    j["summonerName"] = v.summonerName;
    j["autoFillProtectedForSoloing"] = v.autoFillProtectedForSoloing;
    j["draftPositionPreferences"] = v.draftPositionPreferences;
    j["showPositionExcluder"] = v.showPositionExcluder;
    if(v.excludedPositionPreference)
      j["excludedPositionPreference"] = *v.excludedPositionPreference;
  }

  inline void from_json(const nlohmann::json& j, LolLobbyTeamBuilderTbLobbySlotResource_t& v) {
    v.slotId = j.at("slotId").get<int32_t>();
    v.autoFillProtectedForPromos = j.at("autoFillProtectedForPromos").get<bool>();
    v.autoFillProtectedForStreaking = j.at("autoFillProtectedForStreaking").get<bool>();
    v.autoFillEligible = j.at("autoFillEligible").get<bool>();
    v.summonerId = j.at("summonerId").get<uint64_t>();
    v.summonerName = j.at("summonerName").get<std::string>();
    v.autoFillProtectedForSoloing = j.at("autoFillProtectedForSoloing").get<bool>();
    v.draftPositionPreferences = j.at("draftPositionPreferences").get<std::vector<std::string>>();
    v.showPositionExcluder = j.at("showPositionExcluder").get<bool>();
    if(auto it = j.find("excludedPositionPreference"); it != j.end() && !it->is_null())
      v.excludedPositionPreference = it->get<std::string>();
  }
  inline std::string to_string(const LolLobbyTeamBuilderTbLobbySlotResource_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
