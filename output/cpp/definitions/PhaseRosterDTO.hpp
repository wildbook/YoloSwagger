#pragma once
#include <json.hpp>
#include <optional>
#include "Bracket.hpp"
namespace leagueapi {
  struct PhaseRosterDTO_t {
    int64_t phaseId;
    int32_t period;
    std::optional<Bracket_t> bracketDTO;
  };

  inline void to_json(nlohmann::json& j, const PhaseRosterDTO_t& v) {
    j["phaseId"] = v.phaseId;
    j["period"] = v.period;
    if(v.bracketDTO)
      j["bracketDTO"] = *v.bracketDTO;
  }

  inline void from_json(const nlohmann::json& j, PhaseRosterDTO_t& v) {
    v.phaseId = j.at("phaseId").get<int64_t>();
    v.period = j.at("period").get<int32_t>();
    if(auto it = j.find("bracketDTO"); it != j.end() && !it->is_null())
      v.bracketDTO = it->get<Bracket_t>();
  }
  inline std::string to_string(const PhaseRosterDTO_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
