#ifndef SWAGGER_TYPES_PhaseRosterDTO_HPP
#define SWAGGER_TYPES_PhaseRosterDTO_HPP
#include <json.hpp>
#include "Bracket.hpp"
namespace test {
  // 
  struct PhaseRosterDTO {
'    // 
    Bracket bracketDTO;
    // 
    int32_t period;
    // 
    int64_t phaseId;
  };

  void to_json(nlohmann::json& j, const PhaseRosterDTO& v) {
    j["bracketDTO"] = v.bracketDTO;
    j["period"] = v.period;
    j["phaseId"] = v.phaseId;
  }

  void from_json(const nlohmann::json& j, PhaseRosterDTO& v) {
    v.bracketDTO = j.at("bracketDTO").get<Bracket>;
    v.period = j.at("period").get<int32_t>;
    v.phaseId = j.at("phaseId").get<int64_t>;
  }

}
#endif // SWAGGER_TYPES_PhaseRosterDTO_HPP
