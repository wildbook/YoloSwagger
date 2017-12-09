#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolLobbyTeamBuilderTbLobbySlotResource_t {
    bool autoFillProtectedForStreaking;
    std::optional<std::string> excludedPositionPreference;
    int32_t slotId;
    bool autoFillEligible;
    bool autoFillProtectedForPromos;
    bool autoFillProtectedForSoloing;
    uint64_t summonerId;
    std::vector<std::string> draftPositionPreferences;
    bool showPositionExcluder;
    std::string summonerName;
  };

  inline void to_json(nlohmann::json& j, const LolLobbyTeamBuilderTbLobbySlotResource_t& v) {
    j["autoFillProtectedForStreaking"] = v.autoFillProtectedForStreaking;
    if(v.excludedPositionPreference)
      j["excludedPositionPreference"] = *v.excludedPositionPreference;
    j["slotId"] = v.slotId;
    j["autoFillEligible"] = v.autoFillEligible;
    j["autoFillProtectedForPromos"] = v.autoFillProtectedForPromos;
    j["autoFillProtectedForSoloing"] = v.autoFillProtectedForSoloing;
    j["summonerId"] = v.summonerId;
    j["draftPositionPreferences"] = v.draftPositionPreferences;
    j["showPositionExcluder"] = v.showPositionExcluder;
    j["summonerName"] = v.summonerName;
  }

  inline void from_json(const nlohmann::json& j, LolLobbyTeamBuilderTbLobbySlotResource_t& v) {
    v.autoFillProtectedForStreaking = j.at("autoFillProtectedForStreaking").get<bool>();
    if(auto it = j.find("excludedPositionPreference"); it != j.end() && !it->is_null())
      v.excludedPositionPreference = it->get<std::string>();
    v.slotId = j.at("slotId").get<int32_t>();
    v.autoFillEligible = j.at("autoFillEligible").get<bool>();
    v.autoFillProtectedForPromos = j.at("autoFillProtectedForPromos").get<bool>();
    v.autoFillProtectedForSoloing = j.at("autoFillProtectedForSoloing").get<bool>();
    v.summonerId = j.at("summonerId").get<uint64_t>();
    v.draftPositionPreferences = j.at("draftPositionPreferences").get<std::vector<std::string>>();
    v.showPositionExcluder = j.at("showPositionExcluder").get<bool>();
    v.summonerName = j.at("summonerName").get<std::string>();
  }
  inline std::string to_string(const LolLobbyTeamBuilderTbLobbySlotResource_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
