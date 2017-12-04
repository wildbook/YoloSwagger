#ifndef SWAGGER_TYPES_LoginDataPacket_HPP
#define SWAGGER_TYPES_LoginDataPacket_HPP
#include <json.hpp>
namespace test {
  // 
  struct LoginDataPacket {
'    // 
    uint64_t timeUntilFirstWinOfDay;
  };

  void to_json(nlohmann::json& j, const LoginDataPacket& v) {
    j["timeUntilFirstWinOfDay"] = v.timeUntilFirstWinOfDay;
  }

  void from_json(const nlohmann::json& j, LoginDataPacket& v) {
    v.timeUntilFirstWinOfDay = j.at("timeUntilFirstWinOfDay").get<uint64_t>;
  }

}
#endif // SWAGGER_TYPES_LoginDataPacket_HPP
