#ifndef SWAGGER_TYPES_RankedDivision_HPP
#define SWAGGER_TYPES_RankedDivision_HPP
#include <json.hpp>
namespace test {
  // 
  enum class RankedDivision {
'    // 
    I = 1,
    // 
    II = 2,
    // 
    III = 3,
    // 
    IV = 4,
    // 
    V = 5,
  };

  void to_json(nlohmann::json& j, const RankedDivision& v) {
    switch(v) {
      case RankedDivision::I:
        j = "I";
      break;
      case RankedDivision::II:
        j = "II";
      break;
      case RankedDivision::III:
        j = "III";
      break;
      case RankedDivision::IV:
        j = "IV";
      break;
      case RankedDivision::V:
        j = "V";
      break;
    }
  }

  void from_json(const nlohmann::json& j, RankedDivision& v) {
    const auto s& = j.get<std::string>();
    if(s == "I"){
      v = RankedDivision::I;
      return;
    }
    if(s == "II"){
      v = RankedDivision::II;
      return;
    }
    if(s == "III"){
      v = RankedDivision::III;
      return;
    }
    if(s == "IV"){
      v = RankedDivision::IV;
      return;
    }
    if(s == "V"){
      v = RankedDivision::V;
      return;
    }
  }

}
#endif // SWAGGER_TYPES_RankedDivision_HPP
