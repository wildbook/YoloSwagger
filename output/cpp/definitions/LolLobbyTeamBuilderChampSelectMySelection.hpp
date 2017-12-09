#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolLobbyTeamBuilderChampSelectMySelection_t {
    std::optional<int64_t> wardSkinId;
    std::optional<uint64_t> spell2Id;
    std::optional<int32_t> selectedSkinId;
    std::optional<uint64_t> spell1Id;
  };

  inline void to_json(nlohmann::json& j, const LolLobbyTeamBuilderChampSelectMySelection_t& v) {
    if(v.wardSkinId)
      j["wardSkinId"] = *v.wardSkinId;
    if(v.spell2Id)
      j["spell2Id"] = *v.spell2Id;
    if(v.selectedSkinId)
      j["selectedSkinId"] = *v.selectedSkinId;
    if(v.spell1Id)
      j["spell1Id"] = *v.spell1Id;
  }

  inline void from_json(const nlohmann::json& j, LolLobbyTeamBuilderChampSelectMySelection_t& v) {
    if(auto it = j.find("wardSkinId"); it != j.end() && !it->is_null())
      v.wardSkinId = it->get<int64_t>();
    if(auto it = j.find("spell2Id"); it != j.end() && !it->is_null())
      v.spell2Id = it->get<uint64_t>();
    if(auto it = j.find("selectedSkinId"); it != j.end() && !it->is_null())
      v.selectedSkinId = it->get<int32_t>();
    if(auto it = j.find("spell1Id"); it != j.end() && !it->is_null())
      v.spell1Id = it->get<uint64_t>();
  }
  inline std::string to_string(const LolLobbyTeamBuilderChampSelectMySelection_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
