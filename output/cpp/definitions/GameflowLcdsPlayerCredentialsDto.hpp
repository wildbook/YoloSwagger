#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct GameflowLcdsPlayerCredentialsDto_t {
    std::string observerEncryptionKey;
    std::string encryptionKey;
    uint64_t gameId;
    std::string serverIp;
    bool observer;
    uint64_t summonerId;
    std::string observerServerIp;
    uint16_t serverPort;
    uint16_t observerServerPort;
  };

  inline void to_json(nlohmann::json& j, const GameflowLcdsPlayerCredentialsDto_t& v) {
    j["observerEncryptionKey"] = v.observerEncryptionKey;
    j["encryptionKey"] = v.encryptionKey;
    j["gameId"] = v.gameId;
    j["serverIp"] = v.serverIp;
    j["observer"] = v.observer;
    j["summonerId"] = v.summonerId;
    j["observerServerIp"] = v.observerServerIp;
    j["serverPort"] = v.serverPort;
    j["observerServerPort"] = v.observerServerPort;
  }

  inline void from_json(const nlohmann::json& j, GameflowLcdsPlayerCredentialsDto_t& v) {
    v.observerEncryptionKey = j.at("observerEncryptionKey").get<std::string>();
    v.encryptionKey = j.at("encryptionKey").get<std::string>();
    v.gameId = j.at("gameId").get<uint64_t>();
    v.serverIp = j.at("serverIp").get<std::string>();
    v.observer = j.at("observer").get<bool>();
    v.summonerId = j.at("summonerId").get<uint64_t>();
    v.observerServerIp = j.at("observerServerIp").get<std::string>();
    v.serverPort = j.at("serverPort").get<uint16_t>();
    v.observerServerPort = j.at("observerServerPort").get<uint16_t>();
  }
  inline std::string to_string(const GameflowLcdsPlayerCredentialsDto_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
