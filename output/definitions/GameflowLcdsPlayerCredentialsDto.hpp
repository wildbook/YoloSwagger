#ifndef SWAGGER_TYPES_GameflowLcdsPlayerCredentialsDto_HPP
#define SWAGGER_TYPES_GameflowLcdsPlayerCredentialsDto_HPP
#include <json.hpp>
namespace test {
  // 
  struct GameflowLcdsPlayerCredentialsDto {
'    // 
    std::string encryptionKey;
    // 
    uint64_t gameId;
    // 
    bool observer;
    // 
    std::string observerEncryptionKey;
    // 
    std::string observerServerIp;
    // 
    uint16_t observerServerPort;
    // 
    std::string serverIp;
    // 
    uint16_t serverPort;
    // 
    uint64_t summonerId;
  };

  void to_json(nlohmann::json& j, const GameflowLcdsPlayerCredentialsDto& v) {
    j["encryptionKey"] = v.encryptionKey;
    j["gameId"] = v.gameId;
    j["observer"] = v.observer;
    j["observerEncryptionKey"] = v.observerEncryptionKey;
    j["observerServerIp"] = v.observerServerIp;
    j["observerServerPort"] = v.observerServerPort;
    j["serverIp"] = v.serverIp;
    j["serverPort"] = v.serverPort;
    j["summonerId"] = v.summonerId;
  }

  void from_json(const nlohmann::json& j, GameflowLcdsPlayerCredentialsDto& v) {
    v.encryptionKey = j.at("encryptionKey").get<std::string>;
    v.gameId = j.at("gameId").get<uint64_t>;
    v.observer = j.at("observer").get<bool>;
    v.observerEncryptionKey = j.at("observerEncryptionKey").get<std::string>;
    v.observerServerIp = j.at("observerServerIp").get<std::string>;
    v.observerServerPort = j.at("observerServerPort").get<uint16_t>;
    v.serverIp = j.at("serverIp").get<std::string>;
    v.serverPort = j.at("serverPort").get<uint16_t>;
    v.summonerId = j.at("summonerId").get<uint64_t>;
  }

}
#endif // SWAGGER_TYPES_GameflowLcdsPlayerCredentialsDto_HPP
