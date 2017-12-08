#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolLobbyTeamBuilderTbLobbySlotResource_t {
    int32_t slotId;
    bool autoFillProtectedForStreaking;
    std::vector<std::string> draftPositionPreferences;
    bool autoFillProtectedForSoloing;
    std::string summonerName;
    bool autoFillProtectedForPromos;
    bool autoFillEligible;
    bool showPositionExcluder;
    std::optional<std::string> excludedPositionPreference;
    uint64_t summonerId;
  };

  inline void to_json(nlohmann::json& j, const LolLobbyTeamBuilderTbLobbySlotResource_t& v) {
    j["slotId"] = v.slotId;
    j["autoFillProtectedForStreaking"] = v.autoFillProtectedForStreaking;
    j["draftPositionPreferences"] = v.draftPositionPreferences;
    j["autoFillProtectedForSoloing"] = v.autoFillProtectedForSoloing;
    j["summonerName"] = v.summonerName;
    j["autoFillProtectedForPromos"] = v.autoFillProtectedForPromos;
    j["autoFillEligible"] = v.autoFillEligible;
    j["showPositionExcluder"] = v.showPositionExcluder;
    if(v.excludedPositionPreference)
      j["excludedPositionPreference"] = *v.excludedPositionPreference;
    j["summonerId"] = v.summonerId;
  }

  inline void from_json(const nlohmann::json& j, LolLobbyTeamBuilderTbLobbySlotResource_t& v) {
    v.slotId = j.at("slotId").get<int32_t>();
    v.autoFillProtectedForStreaking = j.at("autoFillProtectedForStreaking").get<bool>();
    v.draftPositionPreferences = j.at("draftPositionPreferences").get<std::vector<std::string>>();
    v.autoFillProtectedForSoloing = j.at("autoFillProtectedForSoloing").get<bool>();
    v.summonerName = j.at("summonerName").get<std::string>();
    v.autoFillProtectedForPromos = j.at("autoFillProtectedForPromos").get<bool>();
    v.autoFillEligible = j.at("autoFillEligible").get<bool>();
    v.showPositionExcluder = j.at("showPositionExcluder").get<bool>();
    if(auto it = j.find("excludedPositionPreference"); it != j.end() && !it->is_null())
      v.excludedPositionPreference = it->get<std::string>();
    v.summonerId = j.at("summonerId").get<uint64_t>();
  }
  inline std::string to_string(const LolLobbyTeamBuilderTbLobbySlotResource_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
