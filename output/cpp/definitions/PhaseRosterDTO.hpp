#pragma once
#include <json.hpp>
#include <optional>
#include "Bracket.hpp"
namespace leagueapi {
  struct PhaseRosterDTO_t {
    std::optional<Bracket_t> bracketDTO;
    int32_t period;
    int64_t phaseId;
  };

  inline void to_json(nlohmann::json& j, const PhaseRosterDTO_t& v) {
    if(v.bracketDTO)
      j["bracketDTO"] = *v.bracketDTO;
    j["period"] = v.period;
    j["phaseId"] = v.phaseId;
  }

  inline void from_json(const nlohmann::json& j, PhaseRosterDTO_t& v) {
    if(auto it = j.find("bracketDTO"); it != j.end() !it->is_null())
      v.bracketDTO = it->get<Bracket_t>();
    v.period = j.at("period").get<int32_t>();
    v.phaseId = j.at("phaseId").get<int64_t>();
  }
}
