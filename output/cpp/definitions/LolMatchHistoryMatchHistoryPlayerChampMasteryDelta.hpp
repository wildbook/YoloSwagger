#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolMatchHistoryMatchHistoryPlayerChampMasteryDelta_t {
    std::string grade;
  };

  inline void to_json(nlohmann::json& j, const LolMatchHistoryMatchHistoryPlayerChampMasteryDelta_t& v) {
    j["grade"] = v.grade;
  }

  inline void from_json(const nlohmann::json& j, LolMatchHistoryMatchHistoryPlayerChampMasteryDelta_t& v) {
    v.grade = j.at("grade").get<std::string>();
  }
}
