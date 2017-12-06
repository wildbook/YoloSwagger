#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolChatGameDataChampionSummary_t {
    int32_t id;
    std::string alias;
  };

  inline void to_json(nlohmann::json& j, const LolChatGameDataChampionSummary_t& v) {
    j["id"] = v.id;
    j["alias"] = v.alias;
  }

  inline void from_json(const nlohmann::json& j, LolChatGameDataChampionSummary_t& v) {
    v.id = j.at("id").get<int32_t>();
    v.alias = j.at("alias").get<std::string>();
  }
}
