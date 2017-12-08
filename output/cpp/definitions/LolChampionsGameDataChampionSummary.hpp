#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolChampionsGameDataChampionSummary_t {
    int32_t_t id;
  };

  inline void to_json(nlohmann::json& j, const LolChampionsGameDataChampionSummary_t& v) {
    j["id"] = v.id;
  }

  inline void from_json(const nlohmann::json& j, LolChampionsGameDataChampionSummary_t& v) {
    v.id = j.at("id").get<int32_t_t>();
  }
  inline std::string to_string(const LolChampionsGameDataChampionSummary_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
