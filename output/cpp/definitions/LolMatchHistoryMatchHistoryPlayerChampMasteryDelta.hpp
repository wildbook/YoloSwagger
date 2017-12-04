#ifndef SWAGGER_TYPES_LolMatchHistoryMatchHistoryPlayerChampMasteryDelta_HPP
#define SWAGGER_TYPES_LolMatchHistoryMatchHistoryPlayerChampMasteryDelta_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  struct LolMatchHistoryMatchHistoryPlayerChampMasteryDelta {
    // 
    std::string grade;
  };

  inline void to_json(nlohmann::json& j, const LolMatchHistoryMatchHistoryPlayerChampMasteryDelta& v) {
    j["grade"] = v.grade;
  }

  inline void from_json(const nlohmann::json& j, LolMatchHistoryMatchHistoryPlayerChampMasteryDelta& v) {
    v.grade = j.at("grade").get<std::string>;
  }

}
#endif // SWAGGER_TYPES_LolMatchHistoryMatchHistoryPlayerChampMasteryDelta_HPP
