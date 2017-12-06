#pragma once
#include <json.hpp>
namespace leagueapi {
  enum class RankedDivision_t {
    III_E = 3,
    IV_E = 4,
    II_E = 2,
    V_E = 5,
    I_E = 1,
  };

  inline void to_json(nlohmann::json& j, const RankedDivision_t& v) {
    switch(v) {
      case RankedDivision_t::III_E:
        j = "III";
      break;
      case RankedDivision_t::IV_E:
        j = "IV";
      break;
      case RankedDivision_t::II_E:
        j = "II";
      break;
      case RankedDivision_t::V_E:
        j = "V";
      break;
      case RankedDivision_t::I_E:
        j = "I";
      break;
    }
  }

  inline void from_json(const nlohmann::json& j, RankedDivision_t& v) {
    const auto& s = j.get<std::string>();
    if(s == "III"){
      v = RankedDivision_t::III_E;
      return;
    }
    if(s == "IV"){
      v = RankedDivision_t::IV_E;
      return;
    }
    if(s == "II"){
      v = RankedDivision_t::II_E;
      return;
    }
    if(s == "V"){
      v = RankedDivision_t::V_E;
      return;
    }
    if(s == "I"){
      v = RankedDivision_t::I_E;
      return;
    }
  }
}
