#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolChatGameDataChampionSummary_t {
    std::string alias;
    int32_t id;
  };

  inline void to_json(nlohmann::json& j, const LolChatGameDataChampionSummary_t& v) {
    j["alias"] = v.alias;
    j["id"] = v.id;
  }

  inline void from_json(const nlohmann::json& j, LolChatGameDataChampionSummary_t& v) {
    v.alias = j.at("alias").get<std::string>();
    v.id = j.at("id").get<int32_t>();
  }
  inline std::string to_string(const LolChatGameDataChampionSummary_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
