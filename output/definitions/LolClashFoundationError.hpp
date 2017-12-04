#ifndef SWAGGER_TYPES_LolClashFoundationError_HPP
#define SWAGGER_TYPES_LolClashFoundationError_HPP
#include <json.hpp>
namespace test {
  // 
  enum class LolClashFoundationError {
'    // 
    CLASH_DISABLED = 1,
    // 
    CLASH_NOT_INITIALIZED = 0,
    // 
    DESERIALIZATION_FAILED = 2,
    // 
    GAMEFLOW_UNAVAILABLE = 3,
  };

  void to_json(nlohmann::json& j, const LolClashFoundationError& v) {
    switch(v) {
      case LolClashFoundationError::CLASH_DISABLED:
        j = "CLASH_DISABLED";
      break;
      case LolClashFoundationError::CLASH_NOT_INITIALIZED:
        j = "CLASH_NOT_INITIALIZED";
      break;
      case LolClashFoundationError::DESERIALIZATION_FAILED:
        j = "DESERIALIZATION_FAILED";
      break;
      case LolClashFoundationError::GAMEFLOW_UNAVAILABLE:
        j = "GAMEFLOW_UNAVAILABLE";
      break;
    }
  }

  void from_json(const nlohmann::json& j, LolClashFoundationError& v) {
    const auto s& = j.get<std::string>();
    if(s == "CLASH_DISABLED"){
      v = LolClashFoundationError::CLASH_DISABLED;
      return;
    }
    if(s == "CLASH_NOT_INITIALIZED"){
      v = LolClashFoundationError::CLASH_NOT_INITIALIZED;
      return;
    }
    if(s == "DESERIALIZATION_FAILED"){
      v = LolClashFoundationError::DESERIALIZATION_FAILED;
      return;
    }
    if(s == "GAMEFLOW_UNAVAILABLE"){
      v = LolClashFoundationError::GAMEFLOW_UNAVAILABLE;
      return;
    }
  }

}
#endif // SWAGGER_TYPES_LolClashFoundationError_HPP
